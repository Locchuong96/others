#include <iostream>
using namespace std;

class counter{
    public:
    int count_obj;
    // declare default constructor
    counter(){
        cout << "Object created..." << endl;
        inc_count(); // nested function calling
    }
    // declare default destructor
    ~counter(){
        cout << "Object destroyed..." << endl;
        dec_count();
    }

    void inc_count();
    void dec_count();
    void cur_count();
};

void counter::inc_count(){
    count_obj++;
    cout << "Value count object: " << count_obj << endl;
}

void counter::dec_count(){
    count_obj--;
    cout << "Value count object: " << count_obj << endl;
}

void counter::cur_count(){
    cout << "Value count object: " << count_obj << endl;
}

int main(){
    counter c1;
    return 0;
}