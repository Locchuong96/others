### Using concepts

Systax1 declare next to `requires` keywords:

	template <typename T>
	requrires std::integral<T>
	T add (T a,T b){
		return a+b;
	}

Systax1: using type traits

	template <typename T>
	requires std::is_integral_v<T> // Using a type trait
	T add (T a,T b){
		return a + b;
	}

Example1:

	# include <iostream>
	# include <string>

	template <typename T>
	requires std::integral<T>
	T add(T a, T b){
		return a+b;
	}

	int main(int argc, char** argv){
		
		char a_0{10};
		char a_1{20};
		auto result_a = add(a_0,a_1);
		std::cout << "result_a: " << static_cast<int>(result_a) << std::endl;

		int b_0{11};
		int b_1{5};
		auto result_b = add(b_0,b_1);
		std::cout << "result_b: " << result_b << std::endl;

		double c_0 {11.1};
		double c_1 {1.9};
		auto result_c = add(c_0,c_1); // Error std::intergal concept not satified

		return 0;
	}

Systax2 declare in define type:

	template <std::integral T>
	T add (T a, T b){
		return a + b;
	}

Systax3 define type of parameter:

	auto add (std::integral auto a, std::integral auto b){
		return a + b;
	}

Systax4 after you declare the function

	template <typename T>
	T add (T a, T b) requires std::integral<T>{
		return a +b;
	}


[Concepts library (since C++20)](https://en.cppreference.com/w/cpp/concepts)