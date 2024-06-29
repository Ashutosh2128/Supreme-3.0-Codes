#include<iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

void bubbleSort(int arr[], int n) {
    //outer loop
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1])   
                swap(arr[j], arr[j+1]);
        }
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;

    cout << "Printing before sorting" << endl;
    print(arr, n);
    cout << endl;

    bubbleSort(arr, n);

    cout << "Printing after sorting" << endl;
    print(arr, n);
    cout << endl;

    return 0;
}