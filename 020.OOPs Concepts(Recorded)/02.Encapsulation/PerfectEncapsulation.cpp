#include<iostream>
using namespace std;

class Student {
    private:
        //Attribute
        int id;
        int age;
        string name;
        int nos;
        float *gpa;
        string gf;

    public:
        void setGpa(float a) {
            //Layer of authentication
            *this -> gpa = a;
        }

        float getGpa() const {
            return *this -> gpa;
        }

        int getAge() const {
            return this -> age;
        }

        //ctor: Default ctor
        Student() {
            cout << "Student Default ctor called" << endl;
        }

        //ctor: Parameterised ctor
        Student(int id, int age, string name, int nos, float gpa, string gf) {
            cout << "Student Parameterised ctor called" << endl;

            this -> id = id;
            this -> age = age;
            this -> name = name;
            this -> nos = nos;
            this -> gpa = new float(gpa);
            this -> gf = gf;
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

    private:
        void gfChatting() {
            cout << this -> name << " chatting with gf" << endl;
        }
};

int main() {
    Student A(1, 12, "Ashu", 5, 8.9, "Nothing");

    cout << A.getGpa() << endl;
    A.setGpa(9.2);
    cout << A.getGpa() << endl;

    cout << A.getAge() << endl;

    return 0;
}