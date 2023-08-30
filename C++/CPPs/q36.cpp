#include <iostream>
using namespace std;

class base{
    public:
    // default constructor
    base(){};
    // default destructor
    ~base(){};
    void display(){
        cout << "This is base class" << endl;
    }
};

// single inheritance
class derived: public base{
    public:
    // default constructor
    derived(){};
    // default destructor
    ~derived(){};
    void display(){
        cout << "This is derived class" << endl;
    }
};

int main(){
    base *ptr_base; // pointer to base class
    base b; // object of base class
    derived *ptr_derived; // pointer to derived class
    derived d; // object of derived class

    // pointer get address of derived class
    cout << "Base pointer holding address of derived class object" << endl;
    ptr_base = &d;
    ptr_base->display(); // pointer get address of derived class
    // disp() of base class cause of bptr = &d is just ignoured by compiler at compile time

    // pointer get address of base class
    cout << "Derived pointer holding address of derived class object" << endl;
    ptr_derived = &d;
    ptr_derived->display(); // pointer get address of base class

    return 0;
}