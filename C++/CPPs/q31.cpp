#include <iostream>
using namespace std;

// function overloading
void print(int num){
    cout << "Number integer " << num << endl;
    }

void print(float num){
    cout << "Number float " << num << endl;
    }

// function overiding
class base{
    public:
    base(){
        cout << "Base class created!" << endl;
    }
    ~base(){
        cout << "Base class destroyed!" << endl;
    }
    void print(){
        cout << "This is base class!" << endl;
    }
};

class derived:public base{
    public:
    derived(){
        cout << "Derived class created!" << endl;
    }
    ~derived(){
        cout << "Derived class destroyed!" << endl;
    }
    void print(){
        cout << "This is derived class!" << endl;
    }
};

int main(){
    int a = 6;
    float b = 6.6;
    base base1;
    derived derived1;
    print(a);
    print(b);
    base1.print();
    derived1.print();
    return 0;
}