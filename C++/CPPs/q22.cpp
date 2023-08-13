#include <iostream>
#include <conio.h>
using namespace std;

struct student{
    char name[20];
    int rollno;
    char subjects[3][20];
    float masks[3];

    void get_data();
    void display_info();

};

void student::get_data(){
    int i;
    cout << "Enter student name: " << endl;
    cin >> name;

    cout << "Enter student rollno: " << endl;
    cin >> rollno;

    for(i=0;i<3;i++){
        cout << "Enter name of subject " << i << endl;
        cin >> subjects[i];

        cout << "Enter mark of subject " << i << endl;
        cin >> masks[i];
    }
}

void student::display_info(){
    int i;
    cout << "Student name " << name << endl;
    cout << "Student rollno " << rollno << endl;
    for(i=0;i<3;i++){
        cout << "\tSubject " << subjects[i] << " mask: " << masks[i] << endl;
    }
}

int main(int argc, char*argv[]){

    student my_students[3];
    int j = 3;

    for(j=0;j<3;j++){
        my_students[j].get_data();
    }

    for(j=0;j<3;j++){
        my_students[j].display_info();
    }

    return 0;
}