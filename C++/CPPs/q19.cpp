#include <iostream>
#include <conio.h>
using namespace std;

int fun(int * ptr1, int * ptr2){
    *ptr1 = 20;
    *ptr2 = 10;
}

int main(int argc,char** argv){
    int x = 10;
    int y = 20;

    cout << "x= " << x << "y= " << y << endl;

    fun(&x, &y);

    cout << "x= " << x << "y= " << y << endl;
}