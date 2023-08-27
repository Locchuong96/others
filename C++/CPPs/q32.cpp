#include<iostream>
using namespace std;

class base //base class
{
    public:
    void fibbo(int); //member fun. declaration
};

void base::fibbo(int n) //member fun. definition
{
    int n1=0,n2=1,n3;
    int i;
    cout<<"Series is : "<<endl<<endl;
    cout<<n1<<" "<<n2;
    for(i=0; i<n-2; i++)
    { n3=n1+n2;
    cout<<" "<<n3;
    n1 = n2;
    n2 = n3; }
    cout<<endl<<"This is base class fibbonacci.."<<endl<<endl;
}

class derived:public base //publically derivation of base class
{
    public:
    int fibbo(int n) //same name as base class function
    { if(n==0 || n==1)
    return n;
    else
    return fibbo(n-1)+fibbo(n-2);
    } //member fun. Definition
};

int main()
{
    derived d; //object of derived class
    int n;
    cout<<"How many terms you want : ";
    cin>>n;
    d.base::fibbo(n); //function overriding
    int i=0;
    cout<<endl<<endl;
    cout<<"How many terms you want : ";
    cin>>n;
    cout<<"Series is :"<<endl<<endl;
    while(i<n){
    cout<<" "<<d.derived::fibbo(i); //function overriding
    i++;
    }
    cout<<endl<<endl<<"This is derived class fibbonacci..."<<endl;
    return 0;
}