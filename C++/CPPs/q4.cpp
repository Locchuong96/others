#include <iostream>
#include <conio.h>
using namespace std;

// declare function count string character
int string_lenght(char);

// declare function revert string
void revert_string(char);

// define count string character function
int string_lenght(char p[20]){
    int count;
    for(count = 0; p[count] !='\0';count++){
        // loop until getting null character
    }
    return count;
}

void revert_string(char p[20], int lenght){

    char revert_p[lenght];

    for(int i=lenght-1; i >= 0; i--){
        cout << p[i];
        // revert_p[i]=p[lenght-i];
    }

    // cout << "Revert string" << revert_p << endl;
    cout << endl;
}

int main(){

    int string_len;
    char my_string[20];

    cout << "Enter your string: ";

    cin >> my_string;

    // count string lenght
    string_len = string_lenght(my_string);
    cout << "Lenght of your string: " << string_len << endl;

    // revert string
    revert_string(my_string,string_len);
}