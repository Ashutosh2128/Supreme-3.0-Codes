#include<iostream>
using namespace std;

int findGCD(int a, int b) {
    if(a == 0) return b;
    if(b == 0) return a;

    if(a > b)
        return findGCD(a-b, b);
    else
        return findGCD(a, b-a);
}

int main() {
    int a, b;
    cout << "Enter the two numbers: " << endl;
    cin >> a >> b;

    int gcd = findGCD(a, b);

    cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;

    return 0;
}