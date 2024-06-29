#include <iostream>
using namespace std;

void printArrayColWise(int arr[][4], int rowSize, int colSize) {
    for(int col = 0; col < colSize; col++) {
        for(int row = 0; row < rowSize; row++) {
            cout << arr[row][col] << " ";
        } cout << endl;
    }
}

int main() {
    int arr[3][4];
    int rowSize = 3;
    int colSize = 4;

    //Taking Input
    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            cout << "Taking input for (" << row << ", " << col << "): ";
            cin >> arr[row][col];
        }
    }

    printArrayColWise(arr, rowSize, colSize);

    return 0;
}