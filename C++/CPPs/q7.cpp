#include <iostream>
#include <conio.h>
using namespace std;
#define PI 3.14159

// function declaration
inline float area_circle(int);
inline float area_square(int);
inline float area_rectangle(int, int);
inline float area_triangle(int, int);

// function definition
inline float area_circle(int radius){
    float area;
    area = radius * radius * PI;
    cout << "Area of circle radius " << radius << " = " << area << endl;
    return area;
}

inline float area_square(int dim){
    float area;
    area = dim * dim;
    cout << "Area of square dimension " << dim << " =" << area << endl; 
    return area;
}

inline float area_rectangle(int width, int height){
    float area;
    area = width * height;
    cout << "Area of rectangle width " << width << " height " << height << " =" << area << endl;
    return area;
}

inline float area_triangle(int length, int height){
    float area;
    area = length * height;
    area = area /2;
    cout << "Area of triangle length " << length << " height " << height << " =" << area << endl; 
    return area;
}

int main(){

    float area;
    int r;
    int d;
    int w;
    int h;
    int l;

    // area of circle
    cout << "Enter radius of circle " << endl;
    cin >> r;
    area = area_circle(r);

    // area of square
    cout << "Enter dimension of square " << endl;
    cin >> d;
    area = area_square(d);

    // area of rectangle
    cout << "Enter width of rectangle " << endl;
    cin >> w;
    cout << "Enter height of rectangle " << endl;
    cin >> h;
    area = area_rectangle(w,h);

    // area of triangle
    cout << "Enter lenght of rectangle " << endl;
    cin >> l;
    cout << "Enter height of rectangle " << endl;
    cin >> h;
    area = area_rectangle(l,h);

    return 0;
}