# include <iostream>
# include <string>

template <typename T>
concept TinyType = requires (T t){
	sizeof(T) <=4;
	requires sizeof(T) <= 4;
};

template <typename T>
requires std::integral<T> || TinyType<T>
T add_1(T a,T b){
	return a+ b;
}

template <typename T>
requires std::integral<T> || std::floating_point<T>
T add_2(T a,T b){
	return a+ b;
}

template <typename T>
T func(T t) requires std::integral<T> && requires (T t){ sizeof(T) <=4; requires sizeof(T) <= 4;}
{
	std::cout << "value: " << t << std::endl;
	return (2*t);
}

int main(int argc,char** argv){

	// int a = 20;
	// int b = 10;

	// double a = 20;
	// double b = 10;

	// long a = 20;
	// long b = 10;

	long long int a = 20;
	long long int b = 10;

	auto result_1 = add_1(a,b);
	std::cout << "result_1: " << result_1 << std::endl;

	auto result_2 = add_2(a,b);
	std::cout << "result_2: " << result_2 << std::endl;

	int c {30};
	auto result_3 = func(c);
	std::cout << "result_3: " << result_3 << std::endl;

	return 0;
}