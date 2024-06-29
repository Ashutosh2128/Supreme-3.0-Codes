#include <iostream>
using namespace std;

void diagonalWiseSum(int arr[][3], int rowSize, int colSize) {
    int sum = 0;
    for(int row = 0; row < rowSize; row++) {
        
        for(int col = 0; col < colSize; col++) {
            if(row == col) {
                sum += arr[row][col];
            }
        }
    }
    cout << sum << endl;
}

// void diagonalWiseSum(int arr[][4], int rowSize) {
//     int sum = 0;

//     for(int row = 0; row < rowSize; row++) {
//         sum += arr[row][row];
//     }

//     cout << sum << endl;
// }

int main() {
    int arr[3][3] = {
                    {40, 10, 30},
                    {25, 15, 79},
                    {50, 46, 23}
                    };

    int rowSize = 3;
    int colSize = 3;

    diagonalWiseSum(arr, rowSize, colSize);
    //diagonalWiseSum(arr, rowSize);

    return 0;
}