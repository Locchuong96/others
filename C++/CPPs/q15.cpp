#include <iostream>
#include <conio.h>
using namespace std;

// function declaration
void swap_by_call(int,int);

void swap_by_ref(int &, int &);

void swap_by_add(int *, int *);

// function definition
void swap_by_call(int a, int b){
    int temp;

    cout << "[Inside swap_by_call] Before swapping (call by value) in swap_by_call function:" << endl;

    cout << "num1= " << a << " and num2= " << b << endl;
    
    temp = a;

    a = b;

    b = temp;

    cout << "[Inside swap_by_call] After swapping (call by value) in swap_by_call function:" << endl;

    cout << "num1= " << a << " and num2= " << b << endl;
}

void swap_by_ref(int &a, int & b){

    int temp;

    cout << "[Inside swap_by_ref] Before swapping (call by reference) in swap_by_ref function:" << endl;

    cout << "num1= " << a << " and num2= " << b << endl;
    
    temp = a;

    a = b;

    b = temp;

    cout << "[Inside swap_by_ref] After swapping (call by reference) in swap_by_ref function:" << endl;

    cout << "num1= " << a << " and num2= " << b << endl;
}

void swap_by_add(int *a, int *b){

    int temp;

    cout << "[Inside swap_by_add] Before swapping (call by address) in swap_by_add function:" << endl;

    cout << "num1= " << a << " and num2= " << b << endl;

    cout << "*num1= " << *a << " and *num2= " << *b << endl;

    cout << "&num1= " << &a << " and &num2= " << &b << endl;
    
    temp = *a;

    *a = *b;

    *b = temp;

    cout << "[Inside swap_by_add] After swapping (call by address) in swap_by_add function:" << endl;

    cout << "num1= " << *a << " and num2= " << *b << endl;
}

int main(){

    int x,y;

    cout << "Enter two number integer to swap: ";

    cin >> x >> y;

    cout << endl;

    cout << "Before swapping: " << endl;
    cout << "num1= " << x << "\t num2= " << y << endl;

    cout << endl;

    swap_by_call(x,y); // function calling

    cout << "After swapping (call by value) in main() function" << endl;
    cout << "num1= " << x << "\t num2= " << y << endl;

    swap_by_ref(x,y); // function calling

    cout << "After swapping (call by ref) in main() function" << endl;
    cout << "num1= " << x << "\t num2= " << y << endl;

    cout << endl;

    swap_by_add(&x, &y); // function calling

    cout << "After swapping (call by add) in main() function" << endl;
    cout << "num1= " << x << "\t num2= " << y << endl;

    getch();

    return 0;
}