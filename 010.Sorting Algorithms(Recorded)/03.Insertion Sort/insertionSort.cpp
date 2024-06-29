#include<iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i-1;

        while(j >= 0) {
            if(temp < arr[j]) {
                arr[j+1] = arr[j];
                j--;
            }
            else {
                break;
            }
        }

        arr[j+1] = temp;
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;

    cout << "Printing before sorting" << endl;
    print(arr, n);
    cout << endl;

    insertionSort(arr, n);

    cout << "Printing after sorting" << endl;
    print(arr, n);
    cout << endl;

    return 0;
}