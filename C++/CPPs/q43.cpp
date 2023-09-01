#include <iostream>
#include <math.h>
using namespace std;

// class definition
class Distance{
    int feet;
    int inch;
    public:
    // default constructor
    Distance(){}
    // parameterized constructor
    Distance(int feet, int inch){
        this->feet = feet;
        this->inch = inch;
    }
    // default destructor
    ~Distance(){}
    // member function definition
    void display(){
        cout << "Distance= " << abs(feet) << " feet " << abs(inch) << " inch" << endl;
    }
    // friendly function definition
    friend Distance add(Distance, Distance);
    friend Distance substract(Distance, Distance);
};
// member function definition
Distance add(Distance d1,Distance d2){
    Distance tmp;
    tmp.feet = d1.feet + d2.feet;
    tmp.inch = d1.inch + d2.inch;
    // postprocess
    if(tmp.inch >= 12){
        tmp.feet += tmp.inch / 12;
        tmp.inch = tmp.inch % 12;
    }
    return tmp;
}

Distance substract(Distance d1, Distance d2){
    Distance tmp;
    tmp.feet = d1.feet - d2.feet;
    tmp.inch = d1.inch - d2.feet;
    // postprocess
    if(tmp.inch >=12){
        tmp.feet += tmp.inch/12;
        tmp.inch = tmp.inch %12;
    }
    return tmp;
}
int main(){
    Distance d1(5,5), d2(2,1);

    d1.display();

    d2.display();

    Distance d3 = add(d1,d2);
    Distance d4 = substract(d1,d2);

    d3.display();

    d4.display();
    
    return 0;
}
