### Integer Modifiers

**Positive and negative numbers**

|Type with modifier|Bytes in memory|Range|
|---|---|---|
|usigned int|4|[0 ~ 2^(n)-1]|
|signed int|4|[-2^(n-1) ~ 2^(n-1) -1]|

we can use datatype `int`  also know as `unsigned int`
- positive: `int value1 {10};`
- negative: `int value2 {-300};`

or `signed int` to signal the compile that the variable may get negative value
- positive: `signed int value1 {10};`
- negative: `signed int value2 {-300};`

**Range of interger**

**short**
		
	short short_var {-32768}; // 2 bytes
	short int short_int {455};
	signed short signed_short {122};
	signed short int signed_short_int {-456};
	unsigned short int usigned_short_int {456};

**int**

	int int_var {55}; // 4 bytes
	signed signed_var {66};
	signed int signed int {77};
	unsigned int usigned_int {77};

**long**

	long long_var {88}; // 8 bytes
	long int long_int {33};
	signed long signed_long {44};
	signed long int signed_long_int {44};
	unsigned long int usigned_long_int {44};

**long long**

	long long long_long {888}; //8 bytes
	long long int {999};
	signed long long {444};
	signed long long int {555};
	unsigned long long int {1234};