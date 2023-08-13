#include <iostream>
#include <conio.h>

using namespace std;

class Polar{
    float radius;
    float angle;
    public:
    // overaloaded constructor
    // default constructor
    Polar(){
        radius = 0;
        angle = 0;
        cout << "Default constructor invoked" << endl;
    }
    // parameterized constructor
    Polar(float r, float a){
        radius = r;
        angle = a;
        cout << "Pameterized constructor invoked" << endl;

    }
    // Copy constructor
    Polar (Polar &p){
        radius = p.radius;
        angle = p.angle;
        cout << "Copy constructor invoked" << endl;
    }

    // Destructor
    ~Polar(){
        cout << "Destructor invoked" << endl;
    }

    void display(){
        cout << "Radius: " << radius << endl;
        cout << "Angle: " << angle << endl;
    }
};

int main(){

    Polar p1;
    p1.display();

    Polar p2(3,4);
    p2.display();

    Polar p3 = p2;
    p3.display();

    return 0;
}