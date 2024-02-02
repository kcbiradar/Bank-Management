#include<bits/stdc++.h>

#include<exception>

using namespace std;

struct Myexception : public exception {
    const char * what() const throw() {
        return "C++ Exception\n";
    }
};

int main() {
    try {
        throw Myexception();
    } catch(Myexception &e) {
        cout << "MyException caught" << endl;
        cout << e.what() << endl;
    }
}