/*
multiple
*/
#include <iostream>
using namespace std;

class base1{
    int a;
    public:
    // constructor of base class
    base1(int a1){
        a=a1;
        cout << "This is base1 class constructor" << endl;
    }
    // destructor of base class
    ~base1(){
        cout << "This is base1 class destructor" << endl;
    }
    void display(){
        cout << "Value of a= " << a << endl;
    }
};

class base2{
    int b;
    public:
    // constructor of base class
    base2(int b1){
        b = b1;
        cout << "This is base2 class constructor" << endl;
    }
    // destructor of base class
    ~base2(){
        cout << "This is base2 class destructor" << endl;
    }
    void display(){
        cout << "Value of b= " << b << endl;
    }
};

// multiple inheritance
class mid1: public base1, public base2{
    int c;
    public:
    // constructor of midle class
    mid1(int c1,int c2, int c3):base1(c2),base2(c3){
        // multiple inheritance
        // 3 arguments passed into class
        // c1 pass into mid1, c2 pass into base1, c3 pass into base2
        c=c1;
        cout << "This is mid1 class constructor" << endl;
    }
    // destructor
    ~mid1(){
        cout << "This is mid1 class destructor" << endl;
    }
    void display(){
        cout << "Value of c= " << c << endl;
    }
};

class mid2: public base1{
    int d;
    public:
    // constructor of midle class
    mid2(int d1,int d2):base1(d2){
        d=d1;
        cout << "This is mid2 class constructor" << endl;
    }
    // destructor
    ~mid2(){
        cout << "This is mid2 class destructor" << endl;
    }
    void display(){
        cout << "Value of d= " << d << endl;
    }
};

//multilevel inheritance
class derived: public mid2{
    int e;
    public:
    // constructor of derived class
    derived(int e1,int e2, int e3):mid2(e2,e3){
        e = e1;
        cout << "This is derived class constructor" << endl;
    }
    ~derived(){
        cout << "This is derived destructor" << endl;
    }
    void display(){
        cout << "Value of e= " << e << endl;
    }
};

int main(){
    cout << "This is multilevel inheritance " << endl;
    derived d1(3,4,5);
    d1.base1::display();
    d1.mid2::display();
    d1.display();
    return 0;
}