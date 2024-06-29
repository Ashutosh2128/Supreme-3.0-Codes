#include<iostream>
using namespace std;

void printDigit(int n) {
    if(n == 0) return;

    int digit = n % 10;
    //cout << digit << " "; //tail recursion -> print digit in reverse

    printDigit(n/10);

    cout << digit << " "; //head recursion -> print digit in right order
}

int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    printDigit(n);

    return 0;
}