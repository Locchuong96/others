### Logical combinations of concepts

Concepts can be combined wth the logical operators `&&` and `||`

	template <typename T>
	concept TinyType = requires (T t){
		sizeof(T) <=4;
		requires sizeof(T) <= 4;
	};

- `template<typename T> T func(T t) requires ... {}` Example:

		template <typename T>
		// T func(T t) requires std::integral<T> || std::floating_point<T>
		// T func(T t) requires std::integral<T && TinyType<T>
		T func(T t) requires std::integral<T> && 
								requires (T t){
									sizeof(T) <=4;
									requires sizeof(T) <= 4;
								}
		{
			std::cout << "value: " << t << std::endl;
			return (2*t);
		}