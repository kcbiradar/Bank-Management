#include<bits/stdc++.h>

using namespace std;

class Box {
    public:
        double getVolume() {
            return length * bredth * height;
        }

        void setHeight(double h) {
            height = h;
        }

        void setLength(double l) {
            length = l;
        }

        void setBredth(double b) {
            bredth = b;
        }

        //Overload operator + add Two box

        Box operator*(const Box &b) {
            Box box;
            box.length = this->length * b.length;
            box.bredth = this->bredth * b.bredth;
            box.height = this->height * b.height;

            return box;
        }

    private:
        double length;
        double bredth;
        double height;
};

int main() {
    Box box1 , box2 , box3;

    box1.setBredth(10.0);
    box1.setHeight(5.0);
    box1.setLength(15.0);

    cout << "Volume of Box1 is : "<< box1.getVolume() << endl;

    box2.setBredth(7.0);
    box2.setHeight(6.0);
    box2.setLength(9.0);

    cout << "Volume of Box2 is : "<< box2.getVolume() << endl;

    box3 = box1 * box2;

    cout << "Volume of Box3 is : " << box3.getVolume() << endl;

    return 0;
}