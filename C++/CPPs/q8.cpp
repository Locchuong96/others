#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

// function declaration
void count_vowel_conso(char);
// function defination
void count_vowel_conso(char s[20]){
    int i;
    bool lowercase, uppercase;
    bool conso_check;
    int count_vowel=0;
    int count_conso=0;

    for(i =0;i <strlen(s);i++){
        conso_check = (((s[i] >=97) && (s[i] <=132) || (s[i] >=65) && (s[i] <=90)));
        lowercase = ((s[i]=='a') || (s[i]=='i') || (s[i]=='e') || (s[i]=='o') || (s[i]=='u'));
        uppercase = ((s[i]=='A') || (s[i]=='I') || (s[i]=='E') || (s[i]=='O') || (s[i]=='U'));

        if(lowercase || uppercase){
            count_vowel++;
        }
        else if(conso_check){
            count_conso++;
        }
    }

    cout << "Total no. of vowels= " << count_vowel << endl;
    cout << "Total no. of consonants= " << count_conso << endl;
}

int main(){

    char str[20];
    
    cout << "Enter your string " << endl;

    cin >> str;

    cout << "Lenght of your string " << strlen(str) << endl;

    count_vowel_conso(str);

}
