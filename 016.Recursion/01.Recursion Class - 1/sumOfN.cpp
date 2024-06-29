#include<iostream>
using namespace std;

int totalSum(int n) {
    if(n == 1)
        return 1;

    return n + totalSum(n-1);
}

int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int sum = totalSum(n);

    cout << sum << endl;



    return 0;
}