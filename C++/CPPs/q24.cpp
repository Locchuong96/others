#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class ArraySort{

    public:
    // static member function overloading declaration
    static void sort_array(float f[5]);
    static void sort_array(int f[5]);
    static void swap(float &a, float &b);
    static void swap(int &a, int &b);
};

// static member function definition
void ArraySort::sort_array(float f[5]){
    int i,j;
    cout << "Sort by float" << endl;
    for(i=0;i<5-1;i++){
        for(j=0;j<5-1;j++){
            if(f[j] > f[j+1]){
                swap(f[j],f[j+1]);
            }
        }
    }
}

void ArraySort::sort_array(int f[5]){
    int i,j;
    cout << "Sort by int" << endl;
    for(i=0;i<5-1;i++){
        for(j=0;j<5-1;j++){
            if(f[j] > f[j+1]){
                swap(f[j],f[j+1]);
            }
        }
    }
}

void ArraySort::swap(float &a, float &b){
    float temp;
    temp = a;
    a = b;
    b = temp;
}

void ArraySort::swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(int argc, char* argv[]){

    int my_array[5];

    ArraySort a1;

    for(int k=0;k<5;k++){
        cout << "Enter element value " << k << "= ";
        cin >> my_array[k];
        cout << endl;

    }

    // display array
    cout << "Array Before sorting " << endl;
    for(int k=0;k<5;k++){
        cout << my_array[k] << ",";
    }

    cout << endl;

    a1.sort_array(my_array);

    cout << "Array After sorting " << endl;
    for(int k=0;k<5;k++){
        cout << my_array[k] << ",";
    }

    cout << endl;

    return 0;
}