#include<bits/stdc++.h>

using namespace std;

double division(int a , int b) {
    if(b == 0) {
        throw "Division by zero condition!";
    }

    return (a / b);
}

int main() {
    int x , y;
    cin >> x >> y;

    try {
        
        int z = division(x , y);
        cout << z << endl;

    } catch(const char* msg) {
        cerr << msg << endl;
    }

    return 0;
}