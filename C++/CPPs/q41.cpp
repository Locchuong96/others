#include <iostream>
using namespace std;

// class definition
class sample{
    float x;
    float y;
    float z;
    public:
    // default constructor definition
    sample(){}
    // parameterized constructor definition
    sample(float x,float y,float z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    // destructor definition
    ~sample(){}
    // function declaration and definition
    void display_sample(){
        cout << "Value of sample x=" << x << " y=" << y << " z=" << z << endl;
    }
    // functions declaration
    sample operator+(sample);
    sample operator-(sample);
    sample operator/(sample);
    sample operator*(sample);
    bool operator==(sample);
};

sample sample::operator+(sample s){
    sample tmp;
    tmp.x = x + s.x;
    tmp.y = y + s.y;
    tmp.z = z + s.z;
    return tmp;
}

sample sample::operator-(sample s){
    sample tmp;
    tmp.x = x - s.x;
    tmp.y = y - s.y;
    tmp.z = z - s.z;
    return tmp;
}

sample sample::operator/(sample s){
    sample tmp;
    tmp.x = x / s.x;
    tmp.y = y / s.y;
    tmp.z = z / s.z;
    return tmp;
}

sample sample::operator*(sample s){
    sample tmp;
    tmp.x = x * s.x;
    tmp.y = y * s.y;
    tmp.z = z * s.z;
    return tmp;
}

bool sample::operator==(sample s){
    if(x==s.x && y==s.y && z==s.z){
        return true;
    }
    return false;
}

int main(){
    bool equal;
    sample s1(1,2,3), s2(2,3,4);
    
    sample s3 = s1 + s2;
    s3.display_sample();

    sample s4 = s1 - s2;
    s4.display_sample();

    sample s5 = s1 * s2;
    s5.display_sample();

    sample s6 = s1 / s2;
    s6.display_sample();

    equal = s1==s2;

    cout << "s1==s2: " << equal << endl; 
    return 0;
}
