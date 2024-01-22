//#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
//#include <curses.h>
#include<fstream>

using namespace std;

class Bank {
    public:
        void menu();
        void bank_management();
        void atm_management();
};

void Bank::menu() {
    p:
    system("cls");
    cout << "\n\n\t\t\tControl Panel";
    cout << "\n\n 1. Bank Management";
    cout << "\n 2. ATM Management";
    cout << "\n 3. Exit";
    cout << "\n\n Enter your choice : ";
    int choice; cin >> choice;
    string email , pin , password;
    char ch;
    switch(choice) {
        case 1:
            system("cls");
            // checking the login details
            cout << "\n\n\t\t\tLogin Account";
            cout << "\n\n E-mail : ";
            cin >> email;
            cout << "\n\n\t\tPin Code : ";
            for(int i = 0; i < 4; i++) {
                ch = getchar();
                pin += ch;
                cout << "*";
            }
            cout << "\n\n Password : ";
            for(int i = 0; i < 4; i++) {
                ch = getchar();
                password += ch;
                cout << "*";
            }
            if(email == "khajappa.biradar@gmail.com" && pin == "1111" && password == "1111") {
                bank_management();
            } else {
                cout << "\n\n Your E-mail, Pin or Password wrong!!!";
            }
            break;
        case 2:
            atm_management();
            break;
        case 3:
            exit(0);
        default:
            cout << "\n\n Invalid value...Please try again...";
    }
    getchar();
    goto p;
}

void Bank :: bank_management() {

}

void Bank :: atm_management() {

}

int main() {
    Bank bank;
    bank.menu();
}