#include <iostream>
using namespace std;

void firstOcc(int arr[], int n, int target, int &firstOccIndex) {
    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;

    while(s <= e) {
        if(target == arr[mid]) {
            firstOccIndex = mid;
            e = mid-1;
        }
        else if(target < arr[mid]) {
            e = mid-1;
        }
        else if(target > arr[mid]) {
            s = mid+1;
        }

        mid = s + (e-s)/2;
    }
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

    int firstOccIndex = -1; //-1 means not found

    firstOcc(arr, n, target, firstOccIndex);

    if(firstOccIndex == -1) {
        cout << endl << "Target element not found" << endl;
    }
    else {
        cout << endl << "First occurrence index is: " << firstOccIndex << endl;
    }

    return 0;
}