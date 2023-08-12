#include <iostream>
#include <conio.h>
using namespace std;

class Static_demo{
    public:
    static double find_facto(double); // static function declaration
    static void check_prime(int); // static function declaration
};

double Static_demo::find_facto(double n){
    if(n < 1){
        return 1;
    }
    else{
        return n*find_facto(n-1); // recursion
    }
}

void Static_demo::check_prime(int a){
    int i,j;
    int c=0;
    
    for(i=1;i<=a;i++){
        if(a % i == 0){
            c++;
        }
    }

    // check prime number
    if(c <=2){
        cout << a << " Is a prime number" << endl;
    }
    else{
        cout << a << "Is not a prime number"  << endl;
    }
}

int main(){
    double num;
    int n;

    cout << "Enter the number with factorial you want: ";
    cin >> num;
    // calling static member function of static_demo class
    double fact = Static_demo::find_facto(num);
    cout << " Factorial is: " << fact << endl;

    cout << "Enter the number you want to check prime: ";
    cin >> n;
    Static_demo::check_prime(n);

    getch();

    return 0;
}