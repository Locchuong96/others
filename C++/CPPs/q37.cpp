/*
The expression *(int*)ptr is a typecast and dereferencing operation combined. Let's break it down step by step:

(int*)ptr: This part is a typecast. It's converting the pointer ptr to a pointer of type int*, which means that it's treating the memory location pointed to by ptr as if it contains an integer.

*(int*)ptr: This part combines the typecast with the dereferencing operation. After the typecast, the pointer is assumed to point to an integer (or the first part of an integer, depending on the pointer's type). The * operator then dereferences this pointer, giving you the actual integer value at that memory location.

In simpler terms, *(int*)ptr is used to interpret a memory location (usually pointed to by a pointer) as an integer and retrieve the integer value stored at that location.
*/
#include <iostream>
using namespace std;

int main(){
    void *ptr; // void pointer
    int a= 10; // integer
    float b = 20.1; // float

    // void pointer can hold address of any data type
    ptr = &a; // void pointer holding address of interger
    cout << "Value of a is " << a << endl;
    cout << "Address of void pointer is " << ptr << endl;
    cout << "Value of typecast (int*)ptr is " << (int*)ptr << endl;
    cout << "Value of *(int*)ptr is " << *(int*)ptr << endl;

    ptr = &b; // void pointer holding address of float
    cout << "Value of b is " << b << endl;
    cout << "Address of void pointer is " << ptr << endl;
    cout << "Value of pointer is " << *(float*)ptr << endl; // typecasted to float pointer
    return 0;
}