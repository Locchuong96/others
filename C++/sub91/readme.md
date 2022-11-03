### Zooming in on the requires clause

The requires clause can take in four kinds of requirements:
- Simple requirements
- Nested requirements
- Compound requirements
- Tpe requirements

**Simple requirements**
Simple requirement  Only enforces syntax , not the condition value!!!

	template <typename T>
	concept TinyType = requires (T t){
		sizeof(T) <= 4; //Simple requirement: Only check systax
	}

**Nested requirements**

	template <typename T>
	concept TinyType = requires (T t){
		sizeof(T) <=4; // Simple requirement: Only check systax
		requires sizeof(T) <= 4; // Nested requirement: checks the if the expression id true
	};

**Compound requirements**

	template <typename T>
	concept Addable = requires(T a,T b){
		//noexcept is optional
		{a + b} noexcept -> std::convertible_to<int>; // Compound requirment
		// Check if a + b is valid systax, does not throw expections (optional),and the result
		// us convertible to int (optional)
	}

**Tpe requirements**


