#include<iostream>
using namespace std;

class Student {
    public:
        //Attribute
        int id;
        int age;
        string name;
        int nos;
        int *gpa;

        //ctor: Default ctor
        Student() {
            cout << "Student Default ctor called" << endl;
        }

        //ctor: Parameterised ctor
        Student(int id, int age, string name, int nos, float gpa) {
            cout << "Student Parameterised ctor called" << endl;

            this -> id = id;
            this -> age = age;
            this -> name = name;
            this -> nos = nos;
            this -> gpa = new int(gpa);
        }

        //ctor: Copy ctor
        Student(const Student &srcobj) { //srcobj => A
            cout << "Srudent Copy ctor called" << endl;

            this -> id = srcobj.id;
            this -> age = srcobj.age;
            this -> name = srcobj.name;
            this -> nos = srcobj.nos;
        }

        //Behaviour / Methods / Functions
        void study() {
            cout << this->name << " Studying" << endl;
        }

        void sleep() {
            cout << this->name << " Sleeping" << endl;
        }

        void bunk() {
            cout << this->name << " Bunking" << endl;
        }

        //dtor: Default dtor
        ~Student() {
            cout << this->name << " Student Default dtor called" << endl;
            delete this -> gpa;// dtor is used to delete delete the created dynamic memory variable inside the class
        }
};

int main() {
    // Student A;
    // A.id = 1;
    // A.age = 15;
    // A.name = "Ashu";
    // A.nos = 6;

    // A.study();

    // Student B;
    // B.id = 2;
    // B.age = 15;
    // B.name = "Rahul";
    // B.nos = 5;

    // B.bunk();

    //Student A(1, 15, "Ashu", 6); //Stack
    //Student B(2, 13, "Rahul", 6);
    // Student C(1, 11, "Anta", 6);
    // Student D(1, 43, "Munu", 6);

    //cout << A.name << " " << A.age << endl;
    // A.bunk();
    // B.sleep();

    //Copy ctor
    // Student C = A; //Student C(A);
    // cout << C.name << " " << A.name << endl;

    //Dynamic allocation, or Student pointer
    Student *A = new Student(1, 14, "Babbar", 7, 9.8);
    cout << A -> name << endl;
    cout << A -> age << endl;
    A -> study();
    delete A;

    return 0;
}