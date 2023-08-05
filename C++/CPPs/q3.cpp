#include <iostream>
#include <conio.h>
using namespace std;

// function declarations
int swap_int(int &, int &);

// function definitions
int swap_int(int & x1, int & x2){
    int tmp;
    tmp = x1;
    x1 = x2;
    x2 = tmp;
}

// function declarations
void swap_float(float &, float &);

// function definitions
void swap_int(float & x1, float & x2){
    float tmp;
    tmp = x1;
    x1 = x2;
    x2 = tmp;
}

int main(){
    int num1;
    int num2;
    std::cout << "Enter num1 ";
    std::cin >> num1;

    std::cout << "Enter num2 ";
    std::cin >> num2;

    std::cout << "Before swapping num1= " << num1 << " & num2= " << num2 << std::endl;

    swap_int(num1,num2);

    std::cout << "After swapping num1= " << num1 << " & num2= " << num2 << std::endl;
}