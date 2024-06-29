#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*void shiftArray(int arr[], int n, int shift) {
    int finalShift = shift % n; //Refreshing to the number of element shifting in the array

    if(finalShift == 0) {
        return;
    }

    //Step-1 copying the last finalShift number of element to the temp array
    int temp[1000];
    int index = 0;

    for(int i = n-finalShift; i < n; i++) {
        temp[index] = arr[i];
        index++;
    }

    //Step-2 shifting array element by finalShift number of places
    for(int i = n-1; i >= 0; i--) {
        if(i-finalShift >= 0) {
            arr[i] = arr[i-finalShift];
        }
    }

    //Step-3 copy temp element into original array
    for(int i = 0; i < finalShift; i++) {
        arr[i] = temp[i];
    }
}*/

void shiftArray(int arr[], int n, int shift) {
    int finalShift = shift % n;

    if(finalShift == 0)
        return;
    
    int temp[1000];
    int index = 0;

    for(int i = n-finalShift; i < n; i++) {
        temp[index++] = arr[i];
    }

    for(int i = n-1; i >= 0; i--) {
        if(n-finalShift >= 0) {
            arr[i] = arr[i-finalShift];
        }
    }

    for(int i = 0; i < finalShift; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;

    int shift;
    cout << "Enter the amount of shifting: " << endl;
    cin >> shift;

    cout << "Printing array before shifting: " << endl;
    printArray(arr, n);

    shiftArray(arr, n, shift);

    cout << "Printing array after shifting: " << endl;
    printArray(arr, n);

    return 0;
}