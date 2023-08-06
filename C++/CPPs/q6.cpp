#include <iostream>
#include <conio.h>
using namespace std;

inline float add_num(float num1,float num2){
    float num3;
    num3 = num1 + num2;
    cout << "num1 " << num1  << "+" << num2 << " = " << num3 << endl;
    return num3;
}

inline float subtract_num(float num1,float num2){
    float num3;
    num3 = num1 - num2;
    cout << "num1 " << num1  << "-" << num2 << " = " << num3 << endl;
    return num3;
}

inline float multiply_num(float num1,float num2){
    float num3;
    num3 = num1 * num2;
    cout << "num1 " << num1  << "*" << num2 << " = " << num3 << endl; 
    return num3;
}

inline float divide_num(float num1,float num2){
    float num3;
    num3 = num1 / num2;
    cout << "num1 " << num1  << "/" << num2 << " = " << num3 << endl;
    return num3;
}


int main(){

    float a;
    float b;
    float c;

    cout << "Enter first number= " << endl;

    cin >> a;

    cout << "Enter second number= " << endl;

    cin >> b;

    c = add_num(a,b);

    c = subtract_num(a,b);

    c = multiply_num(a,b);

    c = divide_num(a,b);

    return 0;
}