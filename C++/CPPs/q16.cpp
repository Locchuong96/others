// program to demonstrade constructors and destructor
#include <iostream>
#include <conio.h>

using namespace std;

class polar{
    float radius;

    float angle;

    public:
    
    // default constructor definition
    polar(){
        radius = 0;
        angle = 0;

        cout << "Default construtor Invoked \n";

        cout << "Radius= " << radius << "\t Angle= " << angle << endl;
    }

    // parameterized constructor definition
    polar(float r, float a){
        radius = r;

        angle = a;

        cout <<  "Parameterized constructor Invoked\n";

        cout << "Radius= "<< radius << "\t Angle= " << angle << endl;
    }

    // copy constructor definition
    polar(polar &p){
        radius = p.radius;

        angle = p.angle;

        cout << "Copy constructor Invoked " << endl;

        cout << "Radius =" << radius << "\t Angle=" << angle << endl;
    }

    // destructor definition
    ~polar(){
        cout << "Destructor Invoked" << endl;
    }

};

int main(){

    cout << "Block 1 begins \n";

    polar p1; // object created and default constructor called

    {
        cout << "Block 2 begins \n";

        polar p2(5,7); // object created and parameterized constructor called

        {
            cout << "Block 3 begins \n";

            polar p3 = p2; // object created and copy constructor called

            cout << "Block 3 ends \n";
            // destructor called automatically
        }

        cout << "Block 2 ends \n";
    }
    cout << "Block 1 ends \n";

    getch();
    
    return 0;
}


