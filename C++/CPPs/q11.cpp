#include <iostream>
#include <conio.h>
using namespace std;

class Student{
    int rollno;
    char student_name[20];
    char subject_name[3][20];
    float max_mark[3];
    float min_mark[3];
    float obtained_mark[3];

    public:
        void input_data();
        void display_spec(int);
        void display_result();
};

// member function definition
void Student::input_data(){
    // name
    cout << "Enter student name" << endl;
    cin >> student_name;
    
    // Subject
    for(int i=0;i<3;i++){
        cout << "Enter Subject" << i+1 << "name " << endl;
        cin >> subject_name[i];
        cout << "Enter Subject " << i+1 << " Max score" << endl;
        cin >> max_mark[i];
        cout << "Enter Subject " << i+1 << " Min score" << endl;
        cin >> min_mark[i];
        cout << "Enter Subject " << i+1 << " Obtained score" << endl;
        cin >> obtained_mark[i];
    }
}

// member function definition
void Student::display_spec(int roll){
    if(roll==rollno){
        display_result(); // nesting of member function
    }
}

// member function definition
void Student::display_result(){
    int i;
    float per;
    float total_max = 0;
    float total_obtained = 0;
    cout << "Result of student " << student_name << "......." << endl;

    for(i=0;i<3;i++){
        total_max = total_max + max_mark[i];
        total_obtained = total_obtained + obtained_mark[i];
    }

    per = total_obtained /total_max * 100;

    cout << "Total obtained marks in " << total_max << " is= " << total_obtained << endl;
    cout << "Percentange is= " << per << "%" << endl;

    if(per >= 85){
        cout << "First Division" << endl;
    }
    else if((per > 70) && (per < 85)){
        cout << "Second Division" << endl;
    }
    else if((per >= 50) && (per < 70)){
        cout << "Second Division" << endl;
    }
    else if(per < 50){
        cout << "Fail" << endl;
    }
}

int main(){

    Student my_student;

    my_student.input_data();

    my_student.display_result();

    return 0;
}