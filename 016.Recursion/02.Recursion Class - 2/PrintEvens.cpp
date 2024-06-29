#include<iostream>
using namespace std;

void printEvens(int arr[], int n, int index) {
    if(index == n) return;

    if(!(arr[index] & 1)) 
        cout << arr[index] << " ";

    printEvens(arr, n, index+1);
}

int main() {
    int arr[] = {23, 34, 45, 12, 67, 89, 32, 21, 56, 65};
    int n = 10;
    int index = 0;

    printEvens(arr, n, index);


    return 0;
}