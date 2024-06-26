#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinaryMethod1(int n) {
    //division method
    int binaryNo = 0;
    int i = 0;

    while(n > 0) {
        int bit = n % 2;
        binaryNo = bit * pow(10, i) + binaryNo;
        n = n / 2;
        i = i + 1;
    }

    return binaryNo;
}

int main() {
    int n;
    cin >> n;

    int binary = decimalToBinaryMethod1(n);

    cout << binary << endl;

    return 0;
}