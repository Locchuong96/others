#include <iostream>
using namespace std;

// base class
class base{
    public:
    void display_base(){
        cout << "This is base class!" << endl;
    }
};

// virtual base classes
class mid1: virtual public base{
    public:
    void display_mid1(){
        cout << "This is intermediate base class 1" << endl;
    }
};

class mid2: virtual public base{
    public:
    void display_mid2(){
        cout << "This is intermediate base class 2" << endl;
    }
};

class derived: public mid1, public mid2{
    public:
    void display_derived(){
        cout << "This is derived" << endl;
    }
};

int main(){

    derived d1;

    d1.display_base();
    d1.display_mid1();
    d1.display_mid2();
    d1.display_derived();
    return 0;
}