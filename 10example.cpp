#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

using namespace std;

class bankaccount {
    private:
        char depositor_name[20];
        char account_num[30];                                                 
        long amount = 0;
    public:
        void credentials();
        void deposit(long amount1);
        void withdraw_amount(long w_amount);   
        void display();
};

void bankaccount :: credentials() {
    cout <<"\n\nEnter your Name : ";
    gets(depositor_name);
    cout <<"Enter your account number : ";
    cin >>account_num;
}

void bankaccount :: deposit(long amount1) {
    if (amount == 0) {
        amount = amount1;
        return;
    } amount = amount + amount1;
}

void bankaccount :: withdraw_amount(long w_amount) {   
    if (w_amount <= amount) {
        amount = amount-w_amount;
    } else {
        cout <<"invalid amount!"<<endl;
    }              
}

void bankaccount :: display() {
    cout <<"\n\nDepositor name   : "<<depositor_name<<endl;
    cout <<"Account number   : "<<account_num<<endl;
    cout <<"Amount           : "<<amount<<endl;
}

int main() {
    bankaccount ahmed;
    int option;
    long num;
    string key = "ahmed rasheed";
    string password;
    // char pass[20];
    while(1) {
        cout << " enter password : ";
        getline(cin, password);
        if (key == password) {
            break;
        }
        system("CLS");
        cout << "wrong password!" <<endl;
    }
    while (1) {
        cout <<"\n\npress 1 to make account."<<endl;
        cout <<"press 2 to deposit amount."<<endl;
        cout <<"press 3 to withdraw amount."<<endl;
        cout <<"press 4 to display."<<endl;
        cout <<"press 0 to exit."<<endl;
        cout <<"press key_";
        option = getch();
        switch(option) {
            case '1':
                ahmed.credentials();
                break;
            case '2':
                cout <<"\nenter amount to deposit : ";
                cin >>num;
                ahmed.deposit(num);
                break;
            case '3':
                cout <<"\nenter amount to withdraw : ";
                cin >>num;
                ahmed.withdraw_amount(num);
                break;
            case '4':
                ahmed.display();
                break;
            case '0':
                exit(0);
        }
    }
    return 0;
}