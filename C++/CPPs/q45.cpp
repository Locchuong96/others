#include <iostream>
using namespace std;

class Father; // forward class declaration
class Mother{
    // data member
    float salary;
    public:
    // Default constructor
    Mother(){}
    // Paramterized constructor
    Mother(float salary){
        this->salary = salary;
    }
    // Destructor
    ~Mother(){}
    // function definition
    void display(){
        cout << "Mother salary " << salary << "$" << endl;
    }
    // friend class declaration
    friend class Father;
};

class Father{
    //data member
    float salary;
    public:
    // default constructor
    Father(){}
    // paramterized constructor
    Father(float salary){
        this->salary = salary;
    }
    // Destructor
    ~Father(){}
    // function definition
    void display(){
        cout << "Father salary " << salary << "$" << endl;
    }
    void add_salary(Mother);
};

// function definition
void Father::add_salary(Mother m){
    salary += m.salary;
    cout << "Total salary of father and mother " << salary << endl;
}

int main(){

    Father dad(45);

    dad.display();

    Mother mom(45);

    mom.display();

    dad.add_salary(mom);

    dad.display();
    
    return 0;
}
