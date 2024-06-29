#include<iostream>
using namespace std;

int pow(int n) {
    //base case
    if(n == 0)
        return 1;

    return 2 * pow(n-1);
}

int main() {

    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    cout << "2 to the power " << n << " is: " << pow(n) << endl;


    return 0;
}