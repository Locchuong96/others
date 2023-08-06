#include <iostream>
#include <conio.h>

#define PI 3.1415;
using namespace std;

class calculate{
    float area;
    public:
        // function declaration
        void calculate_area(float); // circle
        void calculate_area(float,float); // rectangle, fuction overloading
};

// function defining outside of the class
void calculate::calculate_area(float radius){
    area = radius * radius * PI;
    cout << "Area of circle, Radius= " << radius << "Area= " << area << endl; 
}

void calculate::calculate_area(float width, float height){
    area = width * height;
    cout << "Area of rectangle, Width= " << width << "Height= " << height << "Area= " << area << endl; 
}

int main(){

    float r;
    float w;
    float h;

    calculate mycalc;

    cout << "Enter your radius " << endl;
    cin >> r;
    mycalc.calculate_area(r);

    cout << "Enter your width " << endl;
    cin >> w;

    cout << "Enter your height " << endl;
    cin >> h;

    mycalc.calculate_area(w,h);


    return 0;
}