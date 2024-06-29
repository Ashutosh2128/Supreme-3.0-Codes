#include<iostream>
using namespace std;

void printCount(int n) {
    //base case
    if(n == 0)
        return;

    //processing
    cout << n << " ";

    //recursive relation
    printCount(n-1);
}

int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    cout << "Printing from " << n << " to 1: " << endl;
    printCount(n);
}