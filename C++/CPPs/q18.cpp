#include <iostream>
#include <cstdlib>
using namespace std;

int box1 = 1;
int box2 = 2;
int * gptr;

void passByPtr(int * ptr); // create a copy of pointer
void passByPtrRef(int * & ptrRef); // create a alias reference (the same pointer)

int main(int agrc, char* argv[]){
    
    int* p = &box1; //store the address of variable box1 inside the pointer p
    gptr = &box2; // store the address of variable box2 inside the pointer gptr

    cout << "box1 value " << box1 << " box2 value " << box2 << endl;

    //passByPtr(p);
    passByPtrRef(p);
    

    cout << "\n___Current conditions___\n";
    
    if(p== &box1){
        cout << "p is pointing to box1\n";
    }
    else if(p== &box2){
        cout << "p is pointing to box2\n";
    }
    else {
        cout << "p is pointing to another box\n";
    }

    cout << "box1 value " << box1 << " box2 value " << box2 << endl;
    
    if(gptr== &box1){
        cout << "gptr is pointing to box1\n";
    }
    else if(gptr== &box2){
        cout << "gptr is pointing to box2\n";
    }
    else {
        cout << "gptr is pointing to another box\n";
    }
    
    return 0;
}

void passByPtr(int * ptr){
    *ptr = 3;
    ptr = gptr;
    *ptr = 4;
    cout << "\n___ passByPtr has been called___\n";
}

void passByPtrRef(int * & ptrRef){
    *ptrRef = 5;
    ptrRef = gptr;
    *ptrRef = 6;
    cout << "\n___ passByPtrRef has been called___\n";
}