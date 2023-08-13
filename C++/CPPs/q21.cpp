#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class books
{
int book_id;
char title[20];
char author[20];
float price;
char edition[20]; //data members
public:
    void add_book();
    int search_book(char);
    void display_books(); //member function declaration
};

void books::add_book() //member fun. definition
{ cout<<"Enter book's details : "<<endl;
cout<<"Book ID : ";
cin>>book_id;
cout<<"Title : ";
cin>>title;
cout<<"Author : ";
cin>>author;
cout<<"Price : ";
cin>>price;
cout<<"Edition : ";
cin>>edition;
}
int books::search_book(char tmp_author[20]) //member fun. definition
{
 if(strcmp(tmp_author,author))
 { display_books();
 return 1; }
 else
 return 0;}

void books::display_books() //member fun. definition
 { cout<<"Books deatails....."<<endl<<endl;
    cout<<"Book ID : "<<book_id;
    cout<<"\t Title : "<<title<<endl;
    cout<<"Author : "<<author;
    cout<<"\t Price : "<<price<<endl;
    cout<<"Edition : "<<edition<<endl; }
    void loop(char c)
    { int j;
    char ch;
    ch = c;
    for(j=0; j<80; j++)
    cout<<ch; }


int main(){
    int inc;
    int k;
    int total_books=3;
    
    books* ptr;
    books book[total_books]; //array of books
    ptr = book;

    do{
        int op; // option variable
        
        cout << endl;
        cout << "Enter 1 for add book" << endl;
        cout << "Enter 2 for search book" << endl;
        cout << "Enter 3 for display all books" << endl;
        cout << "Enter 4 for exit from the program" << endl;
        cout << endl << "Option please: ";
        cin >> op;
        cout << endl;

        switch(op){
            // add book
            case 1:{
                book[inc].add_book();
                cout << "\t\t\t One book added..." << endl;
                inc ++;
                break;
            }
            // search book
            case 2:{
                string tmp_auth;
                cout<<"Who is the author of the book? please enter : ";
                cin>>tmp_auth;
                int i;
                int found_count=0;
                for(i=0; i<total_books; i++)
                found_count = found_count + book[i].search_book(tmp_auth);
                if(found_count > 0)
                cout<<"\t\t\t "<<found_count<<" book(s) found..."<<endl;
                else
                cout<<"\t\t\t No book found..."<<endl;

                break;
            }
            // display book
            case 3:{
                for(k=0;k< total_books;k++){
                    loop('-');
                    cout << "Book " << k+1 << endl;
                    book[k].display_books();
                    loop('-');
                    cout << endl;
                }
                break;
            }
            // exit
            case 4:{
                exit(1); //exit statement
            }
            default:
            cout << "Chose option 1,2,3,4" << endl;
        }

    }
    while(1);

    getch();

    return 0;
}