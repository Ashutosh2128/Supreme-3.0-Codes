#include <iostream>
using namespace std;

int main() {
    //declaring 2d array
    // int arr[4][3];

    //initialise
    int arr[3][2] = {
                    {10, 20},
                    {30, 40},
                    {50, 60}
                    };

    // int arr[3][2] = {10, 20};

    // cout << arr[2][1] << endl;

    //traverse the entire array
    int rowSize = 3;
    int colSize = 2;
    for(int rowIndex = 0; rowIndex < rowSize; rowIndex++) {
        for(int colIndex = 0; colIndex < colSize; colIndex++) {
            cout << arr[rowIndex][colIndex] << " ";
        }
        cout << endl;
    }

    //Col wise traversal
    for(int r = 0; r < rowSize; r++) {
        for(int c = 0; c < colSize; c++) {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}