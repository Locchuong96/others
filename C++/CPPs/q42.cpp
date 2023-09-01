#include <iostream>
using namespace std;

// class definition
class Polar{
    // member data
    float radius;
    float angle;

    public:
    
    // default constructor
    Polar(){}
    // parameterized constructor
    Polar(float r, float a){
        this->radius = r;
        this->angle = a;
    }
    // default destructor
    ~Polar(){}
    // member function definition
    void display_data(){
        cout << "Radius= " << radius << " Angle= " << angle << endl;
    }
    Polar operator+(Polar p){
        Polar tmp;
        tmp.radius = radius + p.radius;
        tmp.angle = angle + p.angle;
        return tmp;
    }
    // define a function as a friend of class, not a member of class
    // but can access private data members
    friend Polar add(Polar p1, Polar p2){
        Polar tmp;
        tmp.radius = p1.radius + p2.radius;
        tmp.angle = p1.angle + p2.angle;
        return tmp;
    }
};



int main(){
    Polar polar1(1,2), polar2(2,3);
    Polar polar4;
    Polar polar3 = polar1 + polar2;
    polar4 = add(polar1,polar2);
    polar3.display_data();
    polar4.display_data();
    return 0;
}
