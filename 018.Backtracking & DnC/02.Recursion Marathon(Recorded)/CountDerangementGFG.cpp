#include<iostream>
using namespace std;

int solve(int n) {
    //base case
    if(n == 1 || n == 2) return n-1;

    return ((n-1) * (solve(n-1) + solve(n-2)));
}

int main() {
    int n = 4;
    cout << solve(n) << endl;

    return 0;
}