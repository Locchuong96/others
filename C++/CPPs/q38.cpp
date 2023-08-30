#include <iostream>
#include <cstring>

using namespace std;

class Account{
    protected:
    char customer_name[20];
    char account_type[20];
    int account_number;
    float amount;
    public:
    // constructor
    Account(){
        amount = 2000;
        strcpy(account_type,"Basic");
    }
    // destructor
    ~Account(){
        cout << "Destructor called" << endl;
    }
    // member function
    void get_detail(){
        cout << "Enter customer name: " << endl;
        cin >> customer_name;
        cout << "Enter account number: " << endl;
        cin >> account_number;
    }
    void display_detail(){
        cout << "Customer name: " << customer_name << endl;
        cout << "Account number: " << account_number << endl;
        cout << "Account type: " << account_type << endl;
        cout << "Amount: " << amount << endl;
    }
};

// derived class inheritated from base class
class cur_acct:public Account{
    public:
    float deposit;
    // constructor invoked
    cur_acct(){
        cout << "Constructor called" << endl;
    }
    // destructor invoked
    ~cur_acct(){
        cout << "Destructor called" << endl;
    }
    // member function declaration
    void current();
    void get_deposit();
    void show_deposit();
};

// member function definition
void cur_acct::current(){
    get_detail();
    cout << "\nWellcome customer " << customer_name << endl;
    cout << "Your account information is: " << endl;
    display_detail();
}

void cur_acct::get_deposit(){
    cout << "Enter amount to deposit: " << endl;
    cin >> deposit;
    amount += deposit;
}

void cur_acct::show_deposit(){
    cout << "Deposit amount is: " << deposit << endl;
    cout << "Current balance is: " << amount << endl;
}

class sav_acct:public Account{
    public:
    float interest;
    // constructor
    sav_acct(){
        cout << "Constructor called" << endl;
    }
    // destructor
    ~sav_acct(){
        cout << "Destructor called" << endl;
    }
    // member function declaration
    void current();
    void get_interest();
    void show_interest();
};

// member function definition
void sav_acct::current(){
    get_detail();
    cout << "\nWellcome customer " << customer_name << endl;
    cout << "Your account information is: " << endl;
    display_detail();
}

void sav_acct::get_interest(){
    cout << "Enter interest rate: " << endl;
    cin >> interest;
    amount += amount * interest / 100;
}

void sav_acct::show_interest(){
    cout << "Interest amount is: " << interest << endl;
    cout << "Current balance is: " << amount << endl;
}

int main(){
    int i;
    cur_acct acc1;
    sav_acct acc2;
    do{
        cout << "Enter 1 for current account" << endl;
        cout << "Enter 2 for saving account" << endl;
        cout << "Enter 3 for exit" << endl;
        cout << "Enter option" << endl; 
        cin >> i;

        switch(i){
            case 1:
                cout << "Current account" << endl;
                acc1.current();
                acc1.get_deposit();
                acc1.show_deposit();
                break;
            case 2:
                cout << "Saving account" << endl;
                acc2.current();
                acc2.get_interest();
                acc2.show_interest();
                break;
            case 3:
                cout << "Exit" << endl;
                exit(0);
            default:
                cout << "Invalid option" << endl;
                break;
        }
    }
    while(1);

    return 0;
}