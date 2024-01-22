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
    system("clear");
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
            system("clear");
            // checking the login details
            cout << "\n\n\t\t\tLogin Account";
            cout << "\n\n E-mail : ";
            cin >> email;
            cout << "\n\n\t\tPin Code : ";
            for(int i = 1; i <= 4; i++) {
                ch = getchar();
               // cin >> ch;
                pin += ch;
                cout << "*";
            }
            cout << "\n\n Password : ";
            for(int i = 1; i <= 4; i++) {
                ch = getchar();
                //cin >> ch;
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
    p:
    system("clear");
    int choice;
    cout << "\n\n\t\tATM Management System";
    cout << "\n\n 1. New user";
    cout << "\n 2. Already user";
    cout << "\n 3. Deposit option";
    cout << "\n 4. Withdraw option";
    cout << "\n 5. Transfer option";
    cout << "\n 6. Payement option";
    cout << "\n 7. Search user record";
    cout << "\n 8. Edit user record";
    cout << "\n 9. Delete user record";
    cout << "\n 10. Show all records";
    cout << "\n 11. Payment all records";
    cout << "\n 12. Go Back";
    cout << "\n\n Enter your choice : ";
    cin >> choice;
    switch(choice) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            menu();
        default :
            cout << "\n\n Invalid value...Please try again...";
    }
    getchar();
    goto p;
}

void Bank :: atm_management() {
    p:
    system("clear");
    int choice;
    cout << "\n\n\t\tATM Management System";
    cout << "\n\n 1. User Login & Check Balance";
    cout << "\n 2. Withdraw Amount";
    cout << "\n 3. Account Details";
    cout << "\n 4. Go Back";
    cout << "\n\n Enter your choice : ";
    cin >> choice;
    switch(choice) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            menu();
        default :
            cout << "\n\n Invalid value...Please try again...";
    }
    getchar();
    goto p;
}

int main() {
    Bank bank;
    bank.menu();
}