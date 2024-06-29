#include <iostream>
using namespace std;

int main() {
    int a = 21;
    int b = 28;

    cout << "Before swapping : " << endl;
    cout << "a = " << a << ", " << "b = " << b << endl << endl;


    //1.Swap using +, -
    a = b - a;
    b = b - a;
    a = b + a;

    cout << "Swap using + - : " << endl;
    cout << "a = " << a << ", " << "b = " << b << endl << endl;


    //2.Swap using ^
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "Swap using ^ : " << endl;
    cout << "a = " << a << ", " << "b = " << b << endl << endl;


    //Swap using another variable
    int temp = a;
    a = b;
    b = temp;

    cout << "Swap using another variable : " << endl;
    cout << "a = " << a << ", " << "b = " << b << endl << endl;


    //Swap using build in swap() function
    swap(a, b);

    cout << "Swap using built-in swap() function : " << endl;
    cout << "a = " << a << ", " << "b = " << b << endl << endl;


    return 0;
}