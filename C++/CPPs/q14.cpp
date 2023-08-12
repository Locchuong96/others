#include <iostream>
#include <conio.h>
using namespace std;

class complex{
    public:
    float real;
    float imag; // class member declaration
    void get_data(); // class member declaration
    void display();
};

void complex::get_data(){
    cout << "Enter real value " << endl;
    cin >> real;
    cout << "Enter image value" << endl;
    cin >> imag;
    cout << "Your complex is" << real << "+" << imag << "i" << endl;
}

void complex::display(){
    cout << "Your complex is" << real << "+" << imag << "i" << endl;
}

// function prototyping
complex func_add(complex, complex);

// function prototyping
complex func_sub(complex, complex);

// function definition
complex func_add(complex a, complex b){
    complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    result.display();
}

// function definition
complex func_sub(complex a, complex b){
    complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    result.display();
}

int main(){
    
    complex num1, num2, num3;

    num1.get_data();

    num2.get_data();

    num3 = func_add(num1,num2);

    num3 = func_sub(num1,num2);

    return 0;

}