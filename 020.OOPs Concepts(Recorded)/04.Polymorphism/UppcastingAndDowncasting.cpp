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
        void draw() {
            cout << "Circle drawing..." << endl;
        }
};

class Rectangle : public Shape {
    public:
        void draw() {
            cout << "Rectangle drawing..." << endl;
        }
};

class Triangle : public Shape {
    public:
        void draw() {
            cout << "Triangle drawing..." << endl;
        }
};

void shapeDrawing(Shape* s) {
    s -> draw(); //draw is polymorphic
}


int main() {
    //Stack
    // Circle c;
    // Rectangle r;

    // shapeDrawing(&c);
    // shapeDrawing(&r);

    // //Heap
    // Triangle* t = new Triangle();
    // shapeDrawing(t);

    // Shape* s = new Shape();
    // shapeDrawing(s);

    //w/o virtual keyword
    Shape* s = new Shape();
    s -> draw();

    //UPPCASTING
    Shape* s3 = new Circle();
    s3 -> draw();
    
    Circle* c = new Circle();
    c -> draw();

    //DOWNCASTING
    // Circle* c2 = new Shape();
    // c2 -> draw();
    Shape* s2 = new Shape();
    Circle* c2 = (Circle*)s2;
    c2 -> draw();



    return 0;
}