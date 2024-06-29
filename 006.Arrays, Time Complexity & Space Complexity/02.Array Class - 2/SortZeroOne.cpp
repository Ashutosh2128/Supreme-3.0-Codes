#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
} 


//Approach - 1: Counting zeros and ones
void sortZeroOne(int arr[], int n) {
    int zeroCount = 0;
    int oneCount = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            zeroCount++;
        }
        if(arr[i] == 1) {
            oneCount++;
        }
    }

    int i = 0;

    while(i < zeroCount) {
        arr[i] = 0;
        i++;
    }

    while(i < n) {
        arr[i] = 1;
        i++;
    }

    return;
}

int main() {
    int arr[7] = {1, 1, 0, 1, 0, 0, 1} ;
    int n = 7;

    cout << "Printing array before sort 0 1: " << endl;
    printArray(arr, n);

    sortZeroOne(arr, n);

    cout << "Printing array after sort 0 1: " << endl;
    printArray(arr, n);

    return 0;
}