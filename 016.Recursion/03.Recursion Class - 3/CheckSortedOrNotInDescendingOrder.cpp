#include<iostream>
using namespace std;

bool checkSortedInDescending(int arr[], int n, int i) {
    if(i == n-1) return true;

    bool currAns = false;
    bool recursiveAns = false;

    if(arr[i] > arr[i+1]) {
        currAns = true;
    }

    recursiveAns = checkSortedInDescending(arr, n, i+1);

    return (currAns && recursiveAns);
}

int main() {
    int arr[] = {7, 6, 5, 4, 3, 2, 1};
    int n = 7;
    int index = 0;

    if(checkSortedInDescending(arr, n, index)) {
        cout << "Array is sorted properly in descending order" << endl;
    }
    else {
        cout << "Array is not sorted" << endl;
    }


    return 0;
}