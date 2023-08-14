#include <iostream>
#include <conio.h>

using namespace std;

class counter{
    static int count_obj;
    public:

    counter(){
        cout << "...Object created" << endl;
        inc_count(); // nested static member function calling
    }
    
    ~counter(){
        cout << "Object destroyed..." << endl;
        dec_count();

    }

    static void inc_count(){
        count_obj++;
        cout << "Value of count is: " << count_obj << endl;
    }

    static void dec_count(){
        count_obj--;
        cout << "Value of count is: " << count_obj << endl;
    }

    static void cur_count(){
        count_obj--;
        cout << "Current value of count is: " << count_obj << endl;
    }

};

 int main(){

    return 0;
 }