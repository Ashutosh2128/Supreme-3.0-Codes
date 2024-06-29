#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl << endl;
}

void reverseArray(int arr[], int n) {
    int i = 0;
    int j = n-1;

    while(i <= j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

int main() {
    int arr[1000];

    int n;
    cout << "Enter array size: " << endl;
    cin >> n;

    //taking input
    cout << "Enter element into the array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Printing array before reversing: " << endl;
    printArray(arr, n);

    //Reverse
    reverseArray(arr, n);
    cout << "Reversing done 😉........." << endl << endl;

    cout << "Printing array after reversing: " << endl;
    printArray(arr, n);

    return 0;
}