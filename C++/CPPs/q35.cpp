/*
Pointer demonstrade
*/
#include <iostream>
using namespace std;

class student{
    int rollno;
    char student_name[20];
    public:

        void get_data(){
            cout << "Enter roll number and student name: ";
            cin >> rollno >> student_name;
        }

        void display_data(){
            cout << "Student name " << student_name << " Roll number: " <<  rollno << endl;
        }
};
int main(){

    student s1;

    s1.get_data();
    
    s1.display_data();

    // declare a pointer type student
    student* p1;
    
    // assign object address to pointer
    p1 = &s1;

    // call function via pointer
    p1->display_data();
    
    return 0;
}