#include <iostream>
using namespace std;
const float PI = 3.14;

class Circle{
    protected:
    float radius;
    public:
    // parameterized constuctor
    Circle(float radius){
        this->radius = radius;
    }
    ~Circle(){}
    void circle_area(){
        cout << "Area of circle: " << PI * radius * radius << endl;
    }
};

// intermediate class
class Sphere:public Circle{
    public:
    // parameterized constuctor
    Sphere(float radius):Circle(radius){
        // constructor calling statement for base class
        this->radius = radius;
    }
};

int main(){
    Circle c1(6);
    c1.circle_area();
    return 0;
}