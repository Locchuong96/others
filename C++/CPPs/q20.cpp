#include <stdio.h>

int total;

int Square(int x){
    return x*x;
}

int SquareOfSum(int x, int y){
    int z = Square(x+y);
    return z;
}

int main(){
    int a = 4;
    int b = 8;
    
    total = SquareOfSum(a,b);

    printf("output = %d",total);
}