#include <iostream>
using namespace std;

void printArrayDiagonalWise(int arr[][4], int rowSize) {
    for(int row = 0; row < rowSize; row++) {
        cout << arr[row][row] << " ";
    }
}


/*void printArrayDiagonalWise(int arr[][4], int rowSize, int colSize) {
    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            if(row == col) {
                cout << arr[row][col] << " ";
            }
        } cout << endl;
    }
}*/

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

    //printArrayDiagonalWise(arr, rowSize, colSize);
    printArrayDiagonalWise(arr, rowSize);

    return 0;
}