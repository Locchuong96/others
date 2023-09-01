#include <iostream>
using namespace std;

class Father; // forward declaration of father
class Mother{
    // member data
    float salary;
    public:
    // default constructor
    Mother(){}
    // parametrized constructor
    Mother(float salary){
        this->salary = salary;
    }
    // default destructor
    ~Mother(){}
    // member function definition
    void display(){
        cout << "Mother salary " << salary << endl;
    }
    // friend function declaration
    friend void add_salary(Mother,Father);
};

class Father{
    // member data
    float salary;
    public:
    // default constructor
    Father(){}
    // parametrized constructor
    Father(float salary){
        this->salary = salary;
    }
    // default destructor
    ~Father(){}
    // member function declaration
    void display(){
        cout << "Father salary " << salary << endl;
    }
    // friend function declaration
    friend void add_salary(Mother,Father);
};

// friend function definition
void add_salary(Mother m,Father d){
    float money;
    money  = m.salary + d.salary;
    cout << "Money of father and mother is: " << money << endl;
}
int main(){
    Father dad(1000);
    Mother mom(4000);
    add_salary(mom, dad);
    return 0;
}
