#include <iostream>
using namespace std;

// base class
class base{
    public:
    // member function declaration
    void fibbo(int);
};

// member function definition
void base::fibbo(int n){
    int n1=0,n2=1,n3;
    int i;
    cout << "Series is: " << endl;
    cout << n1 << " " << n2;
    for(i=0;i<n-2;i++){
        n3 = n1 + n2;
        cout << " " << n3;
        n1 = n2;
        n2 = n3;
    }
    cout << endl << "This is base class fibbonaci.." << endl;
}

// publically derivation of base class
class derived:public base{
    public:
    // same bame as base class function
    int fibbo(int n){
        if(n==0||n==1){
            return n;
        }
        else{
            return fibbo(n-1) + fibbo(n-2);
        }
    }
};

int main(){

    int n;
    int i=0;
    //base b;
    derived d;

    cout << "How many terms you want: " << endl;
    cin >> n;

    while(i<n){
        d.fibbo(n);
        cout << " " << d.derived::fibbo(i); // function overidding
        i++;
    }
    cout << endl << "This is derived fibbonacci..." << endl;
    return 0;
}