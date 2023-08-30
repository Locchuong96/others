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
    float volume;
    // parameterized constuctor
    Sphere(float radius):Circle(radius){
        // constructor calling statement for base class
        this->radius = radius;
    }
    ~Sphere(){}
    void sphere_volume(){
        volume = (4.0/3)*PI*radius*radius*radius;
        cout << "Volume of Sphere: " << volume << endl;
    }
};

class Cylinder: public Sphere{
    public:
    float volume;
    float height;
    Cylinder(float radius,float height):Sphere(radius){
        this->height = height;
    }
    Cylinder(float radius):Sphere(radius){
        this->radius = radius;
    }
    ~Cylinder(){}
    void cylinder_volume(){
        volume = height * PI * radius * radius;
        cout << "Volume of Cylinder: " << volume << endl;
    }
};

int main(){
    int h;
    int r;
    cout << "Enter radius value" << endl;
    cin >> r;
    Circle c1(r);
    c1.circle_area();

    cout << "Enter radius value" << endl;
    cin >> r;
    Sphere s1(4);
    s1.sphere_volume();

    cout << "Enter radius and height value" << endl;
    cin >> r >> h;

    Cylinder l1(r,h);
    l1.cylinder_volume();
    l1.circle_area();
    
    Cylinder l2(2);
    l2.cylinder_volume();
    l2.circle_area();
    
    return 0;
}