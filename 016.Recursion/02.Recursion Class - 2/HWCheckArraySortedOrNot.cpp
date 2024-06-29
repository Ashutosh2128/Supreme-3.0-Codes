#include<iostream>
using namespace std;

bool isSorted(int arr[], int n, int index) {
    if(index == n-1) return true;

    if(arr[index] < arr[index+1]) {
        return isSorted(arr, n, index+1);
    }
    else {
        return false;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int index = 0;

    if(isSorted(arr, n, index)) {
        cout << "Array is sorted" << endl;
    }
    else {
        cout << "Araay is not sorted" << endl;
    }


    return 0;
}