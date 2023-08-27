#include <iostream>
using namespace std;

class student{
    int rollno;
    char student_name[20];
    public:
    void get_student_data(){
        cout << "Enter roll number and student name: ";
        cin >> rollno >> student_name;
    }
    void display_student_data(){
        cout << "Student name " << student_name << " Roll number: " <<  rollno << endl;
    }
};

class exam{
    protected:
    char subjects[3][20];
    float min_scores[3];
    float max_scores[3];
    float obt_scores[3];
    public:
    // function declartion
    void get_exam_data();
    void display_exam_data();
};

void exam::get_exam_data(){
    int i;
    for(i=0;i<3;i++){
        cout << "Enter subject name, min_score, max_score, obtained_score: " << endl;
        cin >> subjects[i] >> min_scores[i] >> max_scores[i] >> obt_scores[i];
        cout << endl;
    }
}

void exam::display_exam_data(){
    int i;
    for(i=0;i<3;i++){
        cout << "Subject "<< subjects[i] << " min score: " << min_scores[i] << " max score: " << max_scores[i] << " obtained score " << obt_scores[i] << endl;
    }
}

// multi inheritance
class result:public student,public exam{
    // data members
    float total_max;
    float total_obt, per;
    public:
    result(){
        total_max = 0;
        total_obt = 0;
        per = 0;
    }
    // member function declaration
    void get_result();
    void display_result();

};

// member function definition
void result::get_result(){
    int i;
    for(i=0;i<3;i++){
        total_max += max_scores[i];
        total_obt += obt_scores[i];
    }
    per = total_obt*100 / total_max;
}

// member function definition
void result::display_result(){
    if(per >= 80){
        cout << "percent " << per << "%" << "=> Excellent" << endl;
    }
    else if((per > 60)&&(per < 80)){
        cout << "percent " << per << "%" << "=> Good" << endl;
    }
    else if((per >= 50)&&(per < 60)){
        cout << "percent " << per << "%" << "=> Pass" << endl;
    }
    else if(per < 50){
        cout << "percent " << per << "%" << "=> Fail" << endl;
    }
}
int main(){

    result res1;

    res1.get_exam_data();

    res1.get_result();

    res1.display_result();

    return 0;
}