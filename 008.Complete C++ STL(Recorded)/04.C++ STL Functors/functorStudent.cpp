#include<iostream>
using namespace std;

class Student {
    public:
        int marks;
        string name;
        Student() {

        }
        Student(int m, string n) {
            this -> marks = m;
            this -> name = n;
        }
};

//functor
class StudentComparator {
    public:
        bool operator()(Student a, Student b) {
            return a.marks < b.marks;
        }
};

int main() {

    Student s1;
    Student s2;

    s1.marks = 93;
    s1.name = "Babbar";

    s2.marks = 97;
    s2.name = "Lakshay";
    
    StudentComparator cmp;

    if( cmp(s1, s2) ) {
        cout << "Love ke marks Lakshay se kam hai" << endl;
    }
    else {
        cout << "Lakshay ke marks Love se kam hai" << endl;
    }






    return 0;
}