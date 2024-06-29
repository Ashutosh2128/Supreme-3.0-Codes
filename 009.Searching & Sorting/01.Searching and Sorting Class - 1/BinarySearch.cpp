#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n-1;

    int mid = start + (end - start)/2;

    while(start <= end) {
        if(target == arr[mid]) {
            return mid;
        }
        else if(target < arr[mid]) {
            end = mid-1;
        }
        else if(target > arr[mid]) {
            start = mid+1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int main() {
    int arr[1000];

    int n;
    cout << "Enter array size: " << endl;
    cin >> n;

    cout << endl << "Taking inputs in array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << endl << "Enter the target you want to search: " << endl;
    cin >> target;

    int targetIndex = binarySearch(arr, n, target);

    cout << endl << target << " Found at index: " << targetIndex << endl;

    return 0;
}