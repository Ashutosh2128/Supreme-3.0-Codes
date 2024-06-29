#include<iostream>
using namespace std;

int getFactorial(int n) {
    //Base case
    if(n == 0 || n == 1)
        return 1;

    //recursive call
    int recursionKaAns = getFactorial(n-1);

    //processing
    int finalAns = n * recursionKaAns;

    return finalAns;
}

int main() {
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int ans = getFactorial(n);
    cout << "Factorial of " << n << " is: " << ans << endl;



    return 0;
}