#include <iostream>
using namespace std;

//create abstract base class (have atleast one pure virtual function)
class Shape{
    // data member
    int a;
    float b;
    public:
    virtual void get_data() = 0; // pure virtual function definition
    virtual void print_area(){
        cout << "Let print the area of you want " << endl;
    }
};

class Triangle:public Shape{
    // data member
    float width;
    float height;
    float area;
    public:
    // default constructor
    Triangle(){}    
    // parametrized constructor
    Triangle(float width, float height){
        this->width = width;
        this->height = height;
    }
    // destructor
    ~Triangle(){}
    void get_data(){
        cout << "Enter triangle width, height: " << endl;
        cin >> width >> height;
    }
    void print_area(){
        area = 0.5 * width * height;
        cout << "Area of Triangle= " << area << endl;
    }
};

class Rectangle: public Shape{
    // data member
    float width;
    float height;
    float area;
    public:
    // default constructor
    Rectangle(){}
    // parametrized constructor
    Rectangle(float width, float height){
        this->width = width;
        this->height = height;
    }
    // destructor
    ~Rectangle(){}
    void get_data(){
        cout << "Enter Rectangle widht, height " << endl;
        cin >> width >> height;
    }

    void print_area(){
        area = width * height;
        cout << "Area of Rectangle= " << area << endl;
    }
};

int main(){

    Shape *base_ptr[2];
    Triangle t1(3,2);
    Rectangle r1(5,5);
    base_ptr[0] = &t1;
    base_ptr[1] = &r1;
    base_ptr[0]->print_area();
    base_ptr[1]->print_area();
    return 0;
}
