#include<iostream>
using namespace std;

int fastExponential(int a, int b) {
    int ans = 1;

    while(b > 0) {
        if(b & 1) {
            ans = ans * a;
        }

        a = a * a;
        b >>= 1; // b = b / 2;
    }

    return ans;
}

int main() {
    int a, b;
    cout << "Enter the two numbers: " << endl;
    cin >> a >> b;

    int ans = fastExponential(a, b);

    cout << a << " to the power " << b << " is: " << ans << endl;

    return 0;
}