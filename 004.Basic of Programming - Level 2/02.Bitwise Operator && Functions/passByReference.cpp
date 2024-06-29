#include <iostream>
using namespace std;

void passByReference(int &n) {
    cout << "Value of n before changing inside passByReference function: " << n << endl;

    ++n;

    cout << "Value of n after changing inside passByReference function: " << n << endl;
}

int main() {
    int n;
    cin >> n;

    cout << "Value of n inside main function before function calling: " << n << endl;

    passByReference(n);

    cout << "Value of n inside main function after function calling: " << n << endl;


    return 0;
}