#include<iostream>
using namespace std;

class Shape {
    public:
        virtual void draw() {
            cout << "Generic drawing..." << endl;
        }
};

class Circle : public Shape {
    public:
        void draw() override {
            cout << "Circle drawing..." << endl;
        }
};

class Rectangle : public Shape {
    public:
        void draw() override {
            cout << "Rectangle drawing..." << endl;
        }
};

class Triangle : public Shape {
    public:
        void draw() override {
            cout << "Triangle drawing..." << endl;
        }
};

void shapeDrawing(Shape* s) {
    s -> draw(); //draw is polymorphic
}


int main() {
    //Stack
    Circle c;
    Rectangle r;

    shapeDrawing(&c);
    shapeDrawing(&r);

    //Heap
    Triangle* t = new Triangle();
    shapeDrawing(t);

    Shape* s = new Shape();
    shapeDrawing(s);

    return 0;
}