//Sorted arrar: | 3 | 10 | 20 | 40 | 50 | 70 | 80 |
//Nearly sorted: | 10 | 30 | 40 | 20 | 50 | 80 | 70 |
//In case nearly sorted array i index element present at ith position or (i+1)th position or (i-1)th position

#include <iostream>
using namespace std;

int searchInNearlySorted(int arr[], int n, int target) {
    int s = 0;
    int e = n-1;

    int mid = s + (e-s) / 2;

    while(s <= e) {
        if(target == arr[mid]) {
            return mid;
        }
        else if(mid-1 >= 0 && target == arr[mid-1]) {
            return mid-1;
        }
        else if(mid+1 < n && target == arr[mid+1]) {
            return mid+1;
        }
        else if(target < arr[mid]) {
            e = mid-2;
        }
        else if(target > arr[mid]) {
            s = mid+2;
        }

        mid = s + (e-s) / 2;
    }

    return -1;
}

int main() {
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int n = 7;

    int target;
    cout << "Enter the target you want to search:" << endl;
    cin >> target;

    int ans = searchInNearlySorted(arr, n, target);

    if(ans == -1) {
        cout << target << " not found" << endl;
    }
    else {
        cout << target << " found at index: " << ans << endl;
    }

    return 0;
}