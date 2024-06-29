#include<iostream>
using namespace std; 

int fib(int n) {
    //Base case
    if(n == 0 || n == 1)
        return n;

    //Recursive call
    return fib(n-1) + fib(n-2);
    
    //Processing
}

int main() {
    int n;
    cout << "Enter the range you want to find fibinacci: " << endl;
    cin >> n;

    int fibonacci = fib(n);

    cout << "Fibonacci number of range " << n << " is: " << fibonacci << endl;


    return 0;
}