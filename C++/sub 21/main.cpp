#include <iostream>

int main(){
    
	auto var1 {12}; // int
	auto var2 {13.0}; // double
	auto var3 {14.0f}; // float
	auto var4 {15.0l}; // long
	auto var5 {'e'}; // char

	// int modifer suffixes
	auto var6 {123u}; // unsigned
	auto var7 {123ul}; // unsigned long
	auto var8 {123ll}; //long long

    std::cout << var1 << std::endl;

    std::cout << "var1 occupies : " << sizeof(var1) << "bytes" << std::endl;
    std::cout << "var2 occupies : " << sizeof(var2) << "bytes" << std::endl;
    std::cout << "var3 occupies : " << sizeof(var3) << "bytes" << std::endl;
    std::cout << "var4 occupies : " << sizeof(var4) << "bytes" << std::endl;
    std::cout << "var5 occupies : " << sizeof(var5) << "bytes" << std::endl;
    std::cout << "var6 occupies : " << sizeof(var6) << "bytes" << std::endl;
    std::cout << "var7 occupies : " << sizeof(var7) << "bytes" << std::endl;
    std::cout << "var8 occupies : " << sizeof(var8) << "bytes" << std::endl;
    
    return 0;
}