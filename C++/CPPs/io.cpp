#include <iostream>

int main(){
    
    int num1; // declare a variable

    // print message to the console
    std::cout << "This is a message" << std::endl;

    // print log message to the console
    std::clog << "This is a log message" << std::endl;

    // print error to the console
    std::cerr << "This is a error message" << std::endl;

    // Get num1 value
    std::cout << "Enter num1 value: " << std::endl;
    std::cin >> num1;
    std::cout << "Value of num1 is: " << num1 << std::endl;

}