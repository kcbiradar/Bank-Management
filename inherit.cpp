#include<bits/stdc++.h>

using namespace std;

class Point {
    int x , y;
    public:
        Point() {}
        Point(int x , int y) : x{x} , y{y}{}

        Point operator -(const Point &p2) {
            Point p;
            p.x = x - p2.x;
            p.y = y - p2.y;
            return p;
        }

        Point operator +(const Point &p2) {
            Point p;
            p.x = x + p2.x;
            p.y = y + p2.y;

            return p;
        }

        void Print() {
            cout << "x " << x << " y " << y << endl;
        }
    
};

class Shape {
    protected: int width , height;
    public:
        Shape() {}
        Shape(int width , int height) : height{height} , width{width} {}

        virtual ~Shape() {
            cout << "The destructor called from the parent class\n";
        }

        virtual int getArea() = 0;
};

class Rectangle : public Shape {
    public:
        Rectangle(int a , int b) : Shape(a , b) {}
        int getArea() {
            return (height * width);
        }

        ~Rectangle(){
            cout << "Destructor called from the derived class\n";
        }
};

int main() {

    Shape* rect = new Rectangle(10 , 20);

    cout << rect->getArea() << endl;
    
    delete rect;

    return 0;
}