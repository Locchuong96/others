//Derive class inheriate all base class functions and element
#include <iostream>
using namespace std;

class student{
    static int rollno;
    char name[20];
    char contact_no[20];
    char addr[20];
    public:
        // default constructor
        student(){
            // cout << "Default constructor invoked!" << endl;
            rollno ++;
            cout << "Current rollno: " << rollno << endl;
        }
        // default destroyer
        ~student(){
            rollno --;
            cout << "Current rollno: " << rollno << endl;
        }
        // function declaration
        void get_student_data();
        void display_student_data();
};

// function definition
void student::get_student_data(){
    cout << "Enter name of student: ";
    cin >> name;
    cout << "Enter contact infomation: ";
    cin >> contact_no;
    cout << "Enter address: ";
    cin >> addr;
    cout << endl;
}

// function definition
void student::display_student_data(){
    cout << "Name of student: " << name << endl;
    cout << "Roll number: " << rollno << endl;
    cout << "Contact number: " << contact_no << endl;
    cout << "Address: " << addr << endl;
}

int student::rollno; //really important

// derive class test base on class student
class test:public student{
    char subjects[5][20];
    float marks[5];
    public:
    // function declaration
    void get_test_data();
    void display_test_data();
};

void test::get_test_data(){
    int i;
    for(i=0;i<5;i++){
        cout << "Enter name of subject " << i;
        cin >> subjects[i];
        cout << " Enter mark of " << subjects[i];
        cin >> marks[i];
        cout << endl;
    }
}
void test::display_test_data(){
    int i;
    for(i=0;i<5;i++){
        cout << "Subject " << subjects[i] << " " << i << "Mark " << marks[i] << endl;
    }
}

int main(){
    test test1;
    test1.get_student_data();
    test1.display_student_data();
    test1.get_test_data();
    test1.display_test_data();
    // student stu2;
    // stu2.get_student_data();
    // stu2.display_student_data();

    return 0;
}