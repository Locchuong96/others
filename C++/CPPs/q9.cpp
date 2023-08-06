#include <iostream>
#include <conio.h>
using namespace std;

// function declaration
float simple_interest(float,float,float);
void compound_interest(float, float);

// function defination
float simple_interest(float p, float t, float r=3){ // default argument r (rate) is 3%
    float Si = (p*t*r) /100;
    cout << "Simple interest of principle amount (" << p << "),time (" << t << ") and rate(" << r <<") is:"\
    << Si << endl; 
    return Si;
}

void compound_interest(float p, float si){
    cout << "Princible " << p << endl;
    cout << "Simple interest " << si << endl;
    float ci=p+si;
    cout << "Compound Interest is:" << ci << endl;
}

int main(){

    float princ, time, rate;

    cout << "Enter Princible amount:";
    cin >> princ;

    cout << "Enter Time(in months):";
    cin >> time;

    cout << "Enter Rate (im%):";
    cin >> rate;

    float simple_int = simple_interest(princ,time,rate);

    compound_interest(princ,simple_int);

    getch();

    return 0;
}