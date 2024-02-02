#include<bits/stdc++.h>

using namespace std;

const int SIZE = 10;

class Safearay {
    private:
        int arr[SIZE];
    public:
        Safearay() {
            register int i;
            for(i = 0; i < SIZE; i++) {
                arr[i] = i;
            }
        }

        int &operator[](int i) {
            if(i > SIZE) {
                cout << "Index out of bound" << endl;
                return arr[0];
            }

            return arr[i];
        }
};

int main() {
    Safearay A;
    cout << "Value of A[2] : " << A[2] << endl;
    cout << "Value of A[5] : " << A[5] << endl;
    cout << "Value of A[12] : " << A[12] << endl;
}