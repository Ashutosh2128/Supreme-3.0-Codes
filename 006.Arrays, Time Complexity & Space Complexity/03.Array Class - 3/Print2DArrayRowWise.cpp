#include <iostream>
using namespace std;

void printArrayRowWise(int arr[][4], int rowSize, int colSize) {
    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
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

    printArrayRowWise(arr, rowSize, colSize);

    return 0;
}