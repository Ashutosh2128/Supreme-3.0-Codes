#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }

    //agar yahan tak pahanch gaye to
    //iska matlab pura loop chal chuka he
    //iska matlab poora loop me lahin v target nehi mila
    //iska matlab element not found
    //iska matlab return false karna he
    //return false;
    return -1;
}

int main() {
    int arr[1000];

    int size;
    cout << "Enter array size: " << endl;
    cin >> size;

    //input
    cout << "Enter the all element in array: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the value you want to search: " << endl;
    cin >> target;

    int findTarget = linearSearch(arr, size, target);

    if(findTarget < 0) {
        cout << target << " not found in the array" << endl;
    }
    else {
        cout << target << " found at index: " << findTarget << endl;
    }

    return 0;
}