// Static data members are class members that are declared using static keywords. A static member has certain special characteristics which are as follows:

// - Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
// - It is initialized before any object of this class is created, even before the main starts.
// - It is visible only within the class, but its lifetime is the entire program.

#include <iostream>
using namespace std;

class counter{
    static int count_obj;
    public:
    // default constructor
    counter(){
        cout << "...Object created..." << endl;
        // nested static member function calling
        inc_count(); 
    }
    // destructor
    ~counter(){
        cout << "...Object destroyed..." << endl;
        // nested static member function calling
        dec_count();
    }
    // static function definition
    static void inc_count(){
        count_obj++;
        cout << "Value of count is: " << count_obj << endl;
    }
    static void dec_count(){
        count_obj--;
        cout << "Value of count is: " << count_obj << endl;
    }
    static void cur_count(){
        cout << "Current value of count is: " << count_obj << endl;
    }
};

int counter::count_obj;

int main(){
    // object c1 created and constructor invoked (count =1)
    counter c1;
    {
        cout << "Block start---" << endl;
        // object c2 created constructor invoked (count =2)
        counter c2;
        // share the same count_obj
        counter::cur_count();
        cout << "---Block end" << endl;
    }
    // object c2 detroyed and destructor invoked (count =1)
    counter c3;
    // object c3 created constructor invoked (count=2)
    // object c3 destroyed destructor invoked (count = 1)
    // object c1 destroyed destructor invoked (count = 0)
    return 0;
}