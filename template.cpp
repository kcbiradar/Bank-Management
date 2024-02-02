#include<bits/stdc++.h>

using namespace std;

template<class T> 
T mx(T a , T b) {
    return a < b ? b : a;
}

int main() {
    int a , b;
    cin >> a >> b;
    cout << mx(a , b);
}