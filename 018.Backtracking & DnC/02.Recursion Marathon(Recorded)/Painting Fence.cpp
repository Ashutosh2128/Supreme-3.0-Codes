#include<iostream>
using namespace std;

int solve(int n, int k) {
    //Base case
    if(n == 1) return k;
    if(n == 2) return k + k*(k-1);

    return ((k-1) * (solve(n-1, k) + solve(n-2, k)));
}

int main() {
    int n = 3;
    int k = 3;

    cout << solve(n, k) << endl;


    return 0;
}