//Operator Overloading

#include<iostream>
using namespace std;

class Complex {
    public:
        int real;
        int imag;

        Complex() {
            real = imag = -1;
        }

        Complex(int r, int i) : real(r), imag(i) {};

        //Syntax
        // Ret_type operator <op> (arg) {
        //     //function body
        //     return aksdj;
        // }

        Complex operator +(const Complex &B) {
            //this => A instance
            Complex temp;
            temp.real = this -> real + B.real;
            temp.imag = this -> imag + B.imag;

            return temp;
        }

        Complex operator -(const Complex &B) {
            Complex temp;
            temp.real = this -> real - B.real;
            temp.imag = this -> imag - B.imag;

            return temp;
        }

        bool operator ==(const Complex &A) {
            //this => referse to B
            return (this -> real == A.real) && (this -> imag == A.imag);
        }

        // void print() {
        //     printf("[%d + i%d]\n", this -> real, this -> imag);
        // }

        void print() {
            cout << "["<< this -> real << " + i" << this -> imag << "]" << endl;
        }
};

int main() {
    Complex A(3, 3);
    A.print();
    Complex B(3, 3);
    B.print();

    bool b = B == A;
    cout << b << endl;

    

    // Complex C = A + B;
    // C.print();

    // Complex D = A - B;
    // D.print();


    return 0;
}










/*class Complex {
    public:
        int real;
        int imag;

        Complex() {
            real = imag = -1;
        }

        Complex(int r, int i) {
            this -> real = r;
            this -> imag = i;
        }

        Complex operator +(const Complex &B) {
            Complex temp;

            //this => referse to A
            temp.real = this -> real + B.real; 
            temp.imag = this -> imag + B.imag;

            return temp;
        }

        Complex operator -(const Complex &A) {
            Complex temp;

            //this => referse to C
            temp.real = this -> real - A.real;
            temp.imag = this -> imag - A.imag;

            return temp;
        }

        void print() {
            cout << "[" << this -> real << " + i" << this -> imag << "]" << endl;
        }
};

int main() {
    Complex A(5, 3);
    A.print();

    Complex B(2, 1);
    B.print();

    Complex C = A + B;
    C.print();

    Complex D = C - A;
    D.print();

    return 0;
}*/