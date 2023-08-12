#include <iostream>
#include <conio.h>
using namespace std;

class array{
    int a[5]; // data member

    public:
    // parameterized constructor
    array(int b[5]){
        int i;
        for(i=0; i<5; i++){
            a[i] = b[i];
        }
    }

    // function members declaration
    void sort();
    void swap(int &, int &);
};

void array::sort(){
    int i;
    int j;
    // sort array
    for(i=0;i<5;i++){
        for(int j=0; j<5-i;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]); // swapping the values
            }
        }
    }
    // display
    cout << "Array in ascending order: " << endl;
    for(i=0;i<5;i++){
        cout << a[i] << ",";
    }
    cout << endl;

}

void array::swap(int & a, int & b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int c[5];
    int k;
    
    for(k=0;k<5;k++){
        cout << "Enter value of " << k << " element: " << endl;
        cin >> c[k]; 
    }

    array my_array(c);

    my_array.sort();
}