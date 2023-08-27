#include<iostream>
using namespace std;
class Journals //base class 1 definition
{ char journal_name[20];
float price;
public:
void get_data()
{ cout<<endl<<"Enter journal name : ";
cin>>journal_name;
cout<<"Enter price : ";
cin>>price;
}
void disp_data()
{ cout<<endl<<"journal name : "<<journal_name<<endl;
cout<<"price : "<<price<<endl;
}
//member function definitions
};
class Magzines //base class 2 definition
{
    char magz_name[20];
float price;
public:
void get_data()
{
cout<<endl<<"Enter Magzine name : ";
cin>>magz_name;
cout<<"Enter price : ";
cin>>price;
}
void disp_data()
{ cout<<endl<<"Magzine name : "<<magz_name<<endl;
cout<<"price : "<<price<<endl;
}
//member function definitions
};
class Newspaper //base class 3 definition
{ char news_name[20];
float price;
public:
void get_data()
{
cout<<endl<<"Enter Newspaper name : ";
cin>>news_name;
cout<<"Enter price : ";
cin>>price;
}
void disp_data()
{
cout<<endl<<"Newspaper name : "<<news_name<<endl;
cout<<"price : "<<price<<endl;
}
//member function definitions
};
class book:public Journals,public Magzines,public Newspaper
{ //derived class definition
//multiple inheritence
char book_what[20];
public:
void booking_what()
{
cout<<"What you want to book... "<<endl;
cout<<"Journals or Magzines or Newspaper : ";
cin>>book_what;
}
void get_book_data()
{
if(book_what == "Journals")
Journals::get_data(); //fun. overriding
else if(book_what == "Magzines")
Magzines::get_data(); //fun. overriding
else if(book_what == "Newspaper" )
Newspaper::get_data(); //fun. overriding
}
void display_booked()
{
if(book_what == "Journals")
Journals::disp_data(); //fun. overriding
else if(book_what == "Magzines")
Magzines::disp_data(); //fun. overriding
else if(book_what == "Newspaper")
Newspaper::disp_data(); //fun. overriding
}
};
int main()
{
book obj; //Object of derived class
char op;
do{
obj.booking_what();
obj.get_book_data();
obj.display_booked(); //accessing own mwmber function
cout<<endl<<"Press Y to continue : ";
cin>>op;
}while( op == 'y' || op == 'Y');
return 0;
}