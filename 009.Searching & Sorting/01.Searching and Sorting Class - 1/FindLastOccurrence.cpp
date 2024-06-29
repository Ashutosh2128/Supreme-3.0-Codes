#include <iostream>
using namespace std;

void lastOcc(int arr[], int n, int target, int &lastOccIndex) {
    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;

    while(s <= e) {
        if(target == arr[mid]) {
            lastOccIndex = mid;
            s = mid+1;
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

    cout << endl << "Taking inout in array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << endl << "Enter the target you want search: " << endl;
    cin >> target;

    int lastOccIndex = -1; //-1 means not found

    lastOcc(arr, n, target, lastOccIndex);

    if(lastOccIndex == -1) {
        cout << endl << "Target element not found" << endl;
    }
    else {
        cout << endl << "Last occurrence found at index: " << lastOccIndex << endl;
    }
 
    return 0;
}