#include<iostream>
using namespace std;

class Student {
    public:
        int id; 
        int age;
        string name;
        int nos;
        int* cgp;

        Student() {
            cout << "Student defsult constrctor called" << endl;
        }

        Student(int id, int age, string name, int nos, double cgp) {
            cout << "Student parameterised constructor called" << endl;

            //this means it indicating object of the calling function here it is B
            this -> id = id;
            this -> age = age;
            this -> name = name;
            this -> nos = nos;
        }

        Student(const Student &srcobj) {
            cout << "Student copy constructor called" << endl;

            this -> id = srcobj.id;
            this -> age = srcobj.age;
            this -> name = srcobj.name;
            this -> nos = srcobj.nos;
        }

        void study() {
            cout << this -> name << " Studying" << endl;
        }

        void sleep() {
            cout << this -> name << " Sleeping" << endl;
        }

        void bunk() {
            cout << this -> name << " Bunking" << endl;
        }

        ~Student() {
            cout << this -> name << " Student default destructor called" << endl;
            delete cgp;
        }
};

int main() {
    // Student A;
    // A.id = 1;
    // A.name = "Papun";
    // A.study();

    // Student B(2, 1000, "Mahadev", 500, 10);
    // B.sleep();

    // Student C = B; //Student C(B); 
    // cout << B.name << " " << C.name << endl;
    // C.sleep();
    // C.bunk();

    Student *A = new Student(1, 60, "Papun", 6, 8.9);
    A -> sleep();

    Student* B(A);
    cout << A -> age << " " << B -> age << endl;

    delete A;
    delete B;

    return 0;
}