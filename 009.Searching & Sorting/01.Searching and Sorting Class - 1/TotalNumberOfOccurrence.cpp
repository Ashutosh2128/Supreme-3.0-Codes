#include <iostream>
using namespace std;

void leftOcc(int arr[], int n, int target, int &leftOccIndex) {
    int s = 0;
    int e = n-1;
    int mid = s + (e - s) / 2;

    while(s <= e) {
        if(target == arr[mid]) {
            leftOccIndex = mid;
            e = mid - 1;
        }
        else if(target < arr[mid]) {
            e = mid - 1;
        }
        else if(target > arr[mid]) {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
}

void rightOcc(int arr[], int n, int target, int &rightOccIndex) {
    int s = 0;
    int e = n-1;
    int mid = s + (e - s) / 2;

    while(s <= e) {
        if(target == arr[mid]) {
            rightOccIndex = mid;
            s = mid + 1;
        }
        else if(target < arr[mid]) {
            e = mid - 1;
        }
        else if(target > arr[mid]) {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
}

int main() {
    int arr[1000];

    int n;
    cout << "Enter the array size: " << endl;
    cin >> n;

    cout << endl << "Taking inout in array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << endl << "Enter the target you want to search: " << endl;
    cin >> target;

    int leftOccIndex = -1; //-1 means not found
    leftOcc(arr, n, target, leftOccIndex);

    int rightOccIndex = -1; //-1 means not found
    rightOcc(arr, n, target, rightOccIndex);

    if(leftOccIndex == -1 && rightOccIndex == -1) {
        cout << endl << "Target index not present" << endl;
    }
    else {
        cout << endl << "Total number of occurrences of number " << target << " is: " << rightOccIndex - leftOccIndex + 1 << endl;
    }

    return 0;
}