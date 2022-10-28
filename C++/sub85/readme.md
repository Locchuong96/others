### Template type deduction and explicit arguments

The type deduction is the mechanism to deduce param's type.

	template <typename T> T maximum(T a,T b);

		int a{10};
		int b{23};

		double c{34.7};
		double d{23.4};

		std::string e{"hello"};
		std::string f{"world!"};

*Note:*

template parameter `<typename T> T maximum(T a,T b);`

template parameter `maximum<double>(c,d);`

Type deduction:

		maximum(a,b); // int type deduced
		maximum(c,d); // double type deduced
		maximum(e,f); //string type dedcued

- Explicitly say that we want the double version called, if an instance is not there it will be create `maximum<double>(c,d);`

- Implicitly convert from `int` to `double`: `maximum<double>(a,c);`

- But we can not convert `std::string` type to `double` `maximum<double>(a,e);`