### Building your own C++20 Concepts

[Concepts library (since C++20)](https://en.cppreference.com/w/cpp/concepts)

Dependencies

	# include <type_traits>
	# include <concepts>

Different ways to build concepts

Define your custom concepts `MyIntegral` by type traits:

	template <typename T>
	concept MyIntegral = std::is_integral_v<T>;

Define your custom concepts by statement, check a * b is a valid systax

	template <typename T>
	concept Multipliable = requires(T a, T b){
		a * b; // Just makes sure the systax is valid
	};

Define your custom concepts by multiple statement

	template <typename T>
	concept Incrementable = requires (T a){
		 a+=1;
		 ++a;
		 a++;
	};