#include<bits/stdc++.h>

using namespace std;

class Base {
    public:
        virtual void speak() {
            cout << "Its sound\n";
        }
        virtual ~Base() {
            cout << "Destructor is called from base class\n";
        }
};

class Derive : public Base {
    public:
        void speak() override {
            cout << "Dog bark\n";
        }

        ~Derive() {
            cout << "The destructor is called from derive class\n";
        }
};

int main() {
    Base* b = new Derive();
    Base *b2 = new Base();
    b->speak();
    delete b;
    delete b2;
}