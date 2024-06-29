#include <iostream>
using namespace std;

void passByValue(int n) {
    cout << "Value of n before changing inside passByValue function: " << n << endl;

    ++n;

    cout << "Value of n after changing inside passByValue function: " << n << endl;
}

int main() {
    int n;
    cin >> n;

    cout << "Value of n inside main function before function calling: " << n << endl;

    passByValue(n);

    cout << "Value of n inside main function after function calling: " << n << endl;


    return 0;
}