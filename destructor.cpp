#include<bits/stdc++.h>

using namespace std;

class Base {
    public:
        Base() {}
        virtual ~Base() {
            cout << "Destructor called from Base class" << endl;
        }
};

class Derived : public Base {
    public:
        Derived() {}
        ~Derived() {
            cout << "Destructor called from Derived class" << endl;
        }
};

int main() {
    Base *b = new Base();
    Base *d = new Derived();

    delete b;
    delete d;
}