#include <iostream>
#include <conio.h>
using namespace std;

// define structure
struct complex{
    float real; // data member of structure complex
    float imag; // data member of structure complex

    // member function defination
    void get_data(){
        cout << "Enter your real number: " <<endl;
        cin >> real;
        cout << "Enter your imag number: " << endl;
        cin >> imag;

        cout << "Complex number= " << real << "+" << imag << "i" << endl;
    }

    void display(){
        cout << "Complex number= " << real << "+" << imag << "i" << endl;
    }

};

// declare add number function
// return of add_num function is complex
complex add_num(complex, complex);

// define add number function
complex add_num(complex a, complex b){

    complex c;

    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;

    cout << "Add complex number= " << c.real << "+" << c.imag << "i" << endl;

    return c;
}

int main(){
    complex num1, num2, num3;

    num1.get_data();
    num2.get_data();

    num3 = add_num(num1,num2);

    num3.display();
}