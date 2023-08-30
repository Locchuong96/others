#include <iostream>
using namespace std;

class Vector{
    public:
    // data member
    float x;
    float y;
    float z;
    // default constructor
    Vector(){}
    // parametrized constructor
    Vector(float x, float y,float z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    // destructor
    ~Vector(){}
    // member function declaration
    void display();
    // function overloading
    void operator-();
    void operator++();
    void operator--();  
};

// function definition
void Vector::display(){
    cout << "Vector: " << x << "i + " << y << "j + " << z << "k" << endl;
}

// function overloading definition
void Vector::operator-(){
    x = -x;
    y = -y;
    z = -z;
}

void Vector::operator++(){
    ++x;
    ++y;
    ++z;
}

void Vector::operator--(){
    --x;
    --y;
    --z;
}

int main(){

    float a;
    float b;
    float c;

    cout << "Enter value x,y,z of vector" << endl;
    cin >> a >> b >> c;
    Vector v1(a,b,c);
    v1.display();

    v1.operator-();
    v1.display();

    v1.operator++();
    v1.display();

    v1.operator--();
    v1.display();

    return 0;
}