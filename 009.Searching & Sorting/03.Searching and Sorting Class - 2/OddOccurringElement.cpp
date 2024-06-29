#include <iostream>
using namespace std;

int oddOccuringElement(int arr[], int n) {
    int s = 0;
    int e = n-1;

    int mid = s + (e-s) / 2;

    while(s <= e) {
        if(s == e) {
            return s;
        }
        else if(mid-1 >= 0 && arr[mid-1] != arr[mid] && mid+1 < n && arr[mid+1] != arr[mid]) {
            return mid;
        }
        else if(mid-1 >= 0 && arr[mid] == arr[mid-1]) {
            int firstPairIndex = mid-1;

            if(firstPairIndex & 1) {
                //Odd
                e = mid-1;
            }
            else {
                //even
                s = mid+1;
            }
        }
        else if(mid+1 < n && arr[mid] == arr[mid+1]) {
            int firstPairIndex = mid;

            if(firstPairIndex & 1) {
                //odd
                e = mid-1;
            }
            else {
                //even
                s = mid+1;
            }
        }

        mid = s + (e-s) / 2;
    }

    return -1;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 3};
    int n = 11;

    int oddOccurringElementIndex = oddOccuringElement(arr, n);

    if(oddOccurringElementIndex == -1) {
        cout << "Index not found" << endl;
    }
    else {
        cout << "Odd occurring index: " << oddOccurringElementIndex << endl;
        cout << "Odd occurring element: " << arr[oddOccurringElementIndex] << endl;
    }
    

    return 0;
}