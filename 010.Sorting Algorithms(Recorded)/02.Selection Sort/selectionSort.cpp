#include<iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;

        for(int j = i+1; j < n; j++) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        if(minIndex != i)
            swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;

    cout << "Printing before sorting" << endl;
    print(arr, n);
    cout << endl;

    selectionSort(arr, n);

    cout << "Printing after sorting" << endl;
    print(arr, n);
    cout << endl;

    return 0;
}