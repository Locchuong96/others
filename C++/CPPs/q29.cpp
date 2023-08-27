/*
Multi inheriate
*/

#include <iostream>
using namespace std;

// base class 1 definition
class Journal{
    char journal_name[20];
    float price;
    public:
    void get_data(){
        cout << "Enter journal name and price: ";
        cin >> journal_name;
        cout << endl;
        cin >> price;
    }
    void display_data(){
        cout << "Journal name: " << journal_name << " Price: " << price << endl;
    }
};

// base class 2 definition
class Magazine{
    char magazine_name[20];
    float price;
    public:
    void get_data(){
        cout << "Enter magazine name and price: ";
        cin >> magazine_name;
        cout << endl;
        cin >> price;
    }
    void display_data(){
        cout << "Magazine name: " << magazine_name << " Price: " << price << endl;
    }
};

// base class 3 definition
class Newpaper{
    char newpaper_name[20];
    float price;
    public:
    void get_data(){
        cout << "Enter Newpaper name and price: ";
        cin >> newpaper_name;
        cout << endl;
        cin >> price;
    }
    void display_data(){
        cout << "Paper name: " << newpaper_name << " Price: " << price << endl;
    }
};

// derive class definition, multi inheritance
class Book:public Journal, public Magazine, public Newpaper{
    public:
    char book_what[20];
    void booking_what(){
        cout << "What you want to book " << endl;
        cout << "Journal, Magazine or NewPaper: ";
        cin >> book_what;
        cout << "Your book what is: " << book_what;
        cout << endl;
    }

    void get_book_data(){
        
        cout << "Your current book data: " << book_what << endl;

        if(book_what == "Journal")
        Journal::get_data(); // fun overiding
        
        else if(book_what == "Magazine")
        Magazine::get_data(); // fun overiding

        else if(book_what == "NewPaper")
        Newpaper::get_data(); // fun overiding
    }

    void display_book_data(){
        
        cout << "Your current book data: " << book_what << endl;

        if(book_what == "Journal")
        Journal::display_data(); // fun overiding
        
        else if(book_what == "Magazine")
        Magazine::display_data(); // fun overiding

        else if(book_what == "NewPaper")
        Newpaper::display_data(); // fun overiding
    }
};

int main(){
    
    Book book;

    book.booking_what();

    book.get_book_data();

    book.display_book_data();

    return 0;
}