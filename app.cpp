#include<bits/stdc++.h>

using namespace std;

class Base {
    int _val;
    int* _ptr;
    public:
        Base() : _ptr{new int(0)} , _val{0} {}

        // Base(const Base &rhs) {
        //     _ptr = new int;
        //     *_ptr = *rhs._ptr;
        //     _val = rhs._val;
        // }

        void setPtr(int ptr) {*_ptr = ptr;}
        void setVal(int val) {_val = val;}
        int getPtr() {return *_ptr;}
        int getVal() {return _val;}
};

int main() {
    Base b;
    b.setPtr(10) , b.setVal(15);
    Base b2 = b;
    b2.setPtr(50);

    cout << b.getPtr() << endl;
    cout << b2.getPtr() << endl;
    cout << b.getVal() << endl;
    cout << b2.getVal() << endl;

    return 0;
}