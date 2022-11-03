# include <iostream>
# include <concepts>

template <typename T>
concept TinyType = requires (T t){
	sizeof(T) < 4; // Simple requirment: Only enforces syntax , not the condition value!!!
	requires sizeof(T) <= 4;
};

//Compound requriement
template <typename T>
concept Addable = requires (T a, T b){
	// noexcept is optional
	{a + b} noexcept -> std::convertible_to <int>; // Compound requirement
	// Check if a + b is valid ysstax,does not throw expetions(optional)
	// and the result is convrtible to int(optional), if not FAIL
};

Addable auto add(TinyType auto a, TinyType auto b){
	return a +b;
}

int main(int argc,char** argv){

	char x{67}; // char convert to int and violate condtion sizeof(T) < 4
	char y{56}; // char can work with operator add

	auto result = add(x,y);

	std::cout << "result char: " << result << std::endl;

	double a{67};
	double b{56};

	auto result_2 = add(x,y);

	std::cout << "result_double: " << result_2 << std::endl;

	return 0;
}