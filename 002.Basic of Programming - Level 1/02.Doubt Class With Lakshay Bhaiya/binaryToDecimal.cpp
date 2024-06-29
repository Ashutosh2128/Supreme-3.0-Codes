#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binaryNum;

    cout << "Enter the binary number: " << endl;
    cin >> binaryNum;

    int decimal = 0;
    int i = 0;
    int n = binaryNum;

    while(n) {
        int bit = n % 10;
        if(bit == 1) {
            decimal += bit * pow(2, i);
        }
        n = n / 10;
        i = i + 1;
    }

    cout << "Decimal of binary number " << binaryNum << " = " << decimal << endl;

    return 0;
}