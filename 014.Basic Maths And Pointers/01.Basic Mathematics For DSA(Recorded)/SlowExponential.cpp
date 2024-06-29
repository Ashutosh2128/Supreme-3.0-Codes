#include<iostream>
using namespace std;

int slowExponential(int a, int b) {
    int ans = 1;

    for(int i = 0; i < b; i++) {
        ans *= a;
    }

    return ans;
}

int main() {
    int a, b;
    cout << "Enter the two numbers: " << endl;
    cin >> a >> b;

    int ans = slowExponential(a, b);

    cout << ans << endl;

    return 0;
}