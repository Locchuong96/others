# include <iostream>
# include <string>
# include <type_traits>
# include <concepts>

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
concept Multipliable = requires(T a, T b){
	a* b;
};

template <typename T>
concept Incrementable = requires (T a){
	a+=1;
	++a;
	a++;
};

//Systax1
template <typename T>
requires MyIntegral<T>
T add_1(T a,T b){
	return a +b;
}

//Systax2
template <MyIntegral T>
T add_2(T a,T b){
	return a+b;
}

//Systax3
auto add_3(MyIntegral auto a, MyIntegral auto b){
	return a +b;
}

//Systax4
T add_4(T a,T b) requires MyIntegral<T>{
	return a +b;
}

//Systax5
MyIntegral auto add(T a, T b){
	return a + b;
}


int main(int argc,char** argv){

	int a {20};
	int b {10};

	std::cout << "add_1 result: " << add_1(a,b) << std::endl;
	std::cout << "add_2 result: " << add_2(a,b) << std::endl;
	std::cout << "add_3 result: " << add_3(a,b) << std::endl;
	std::cout << "add_4 result: " << add_4(a,b) << std::endl;

	return 0;
}