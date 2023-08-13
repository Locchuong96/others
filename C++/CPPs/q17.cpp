#include <iostream>
#include <conio.h>
using namespace std;

//class definition
class employee{
    // data members
    int emp_id;
    float salary;

    //public area
    public:
    void get_emp_data(); // member function declaration
    void disp_emp_data(); // member function declaration
};

void employee::get_emp_data(){
    cout << "Enter employee details: " << endl;
    cout << "Employee id= ";
    cin >> emp_id;
    cout << "Employee salary= ";
    cin >> salary;
}

void employee::disp_emp_data(){
    cout << "Details of employee is: " << endl;
    cout << "Employee ID= " << emp_id << " and salary= " << salary << endl;
}

int main(){
    employee emp1; // object emp1 created of employede class

    cout << "Accessing through object: " << endl;
    emp1.get_emp_data(); // data entered with the help of object emp1 
    emp1.disp_emp_data();

    employee *emp_ptr; // creating pointer emp_ptr of type employee
    emp_ptr = &emp1; // emp_ptr holds address of object emp1, emp_ptr is pointer to object(emp1)

    cout << "Accessing through pointer to an object: " << endl;
    emp_ptr->disp_emp_data(); // Displaying data stored employee class via emp_ptr (pointer to an object)

    getch();

    return 0;
}