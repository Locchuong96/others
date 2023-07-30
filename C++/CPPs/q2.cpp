#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int rows = 4;
    int columns = 8;
    int tmp;
    int count;
    for(int i = 4; i >=0; i--){
        tmp = i;
        count = 0;
        for(int j = 1; j <= columns; j++){
            if(j==tmp && count <= rows-i){
                tmp = tmp + 2;
                //cout << j;
                std::cout << "*";
                count +=1;
            }
            else{
                std::cout << " ";
            }
            
        }
        cout << endl;
    }
}