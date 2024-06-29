#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int target) {
    if(s > e) return -1; //we reached to the last but target not found

    int mid = s + (e-s) / 2;

    if(arr[mid] == target)
        return mid;

    if(arr[mid] < target) 
        return binarySearch(arr, mid+1, e, target);

    if(arr[mid] > target)
        return binarySearch(arr, s, mid-1, target);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int target = 9;
    int s = 0;
    int e = n-1;

    int ans = binarySearch(arr, s, e, target);

    cout << "Target " << target << " found at index: " << ans << endl;


    return 0;
}