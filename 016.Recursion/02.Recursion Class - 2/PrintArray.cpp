#include<iostream>
using namespace std;

void printArray(int arr[], int n, int index) {
    //Base case
    if(index == n) return;

    //Processing
    cout << arr[index] << " ";

    //recursive call
    printArray(arr, n, index+1);
}

int main() {
    int arr[] = {1, 3, 2, 4, 6, 5};
    int n = 6;
    int index = 0;

    printArray(arr, n, index);

    return 0;
}