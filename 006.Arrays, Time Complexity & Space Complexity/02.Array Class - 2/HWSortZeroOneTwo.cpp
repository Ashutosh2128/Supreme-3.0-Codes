#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl << endl;
}

void sortZeroOneTwo(int arr[], int n) {
    int i = 0;
    int j = 0;
    int k = n-1;

    while(j <= k) {
        if(arr[j] == 0) {
            swap(arr[i], arr[j]);
            i++;
            //j++;
        }
        else if(arr[j] == 1) {
            j++;
        }
        else if(arr[j] == 2) {
            swap(arr[j], arr[k]);
            k--;
        }
    }
}

int main() {
    int arr[15] = {2, 2, 2, 1, 0, 1, 0, 1, 2, 1, 0, 2, 0, 2, 1};
    int n = 15;

    cout << "Printing array before sorting zero one two: " << endl;
    printArray(arr, n);

    sortZeroOneTwo(arr, n);

    cout << "Printing array after sorting zero one two: " << endl;
    printArray(arr, n);

    return 0;
}