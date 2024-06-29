#include<iostream>
using namespace std;

bool searchInArray(int arr[], int n, int index, int target) {
    if(index == n) return false;

    if(arr[index] == target) return true;

    return searchInArray(arr, n, index+1, target);
}

int main() {
    int arr[] = {3, 1, 5, 23, 45, 21};
    int n = 6;
    int index = 0;
    int target = 20;

    if(searchInArray(arr, n, index, target)) {
        cout << "Target found" << endl;
    }
    else {
        cout << "Target not found" << endl;
    }



    return 0;
}