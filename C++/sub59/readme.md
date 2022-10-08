### Declaring and Using References

**Declare references**

Reference to a int

	int int_value {45};
	int& reference_to_int_value_1{int_value}; // Assign reference through initialization
	int& reference_to_int_value_2 = int_value; // Assign throught assigment

Reference to a double

	double double_value{33.65};
	double& reference_to_double_value_1 {double_value};

**Modify references**

If you change the value of the reference, the value of original variable and it's other reference is also change. They can do this because they share the same memory address.

	reference_to_int_value_1 = 55;

