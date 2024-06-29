#include <iostream>
using namespace std;

void ultaDiagonalWiseSum(int arr[][3], int rowSize, int colSize) {
    int sum = 0;

    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            if(row + col == rowSize-1) {
                //cout << row << " " << col << endl;
                sum += arr[row][col];
            }
        }
    }

    cout << sum << endl;
}

int main() {
    int arr[3][3] = {
                    {30, 10, 40},
                    {34, 67, 45},
                    {54, 90, 21}
                    };

    int rowSize = 3;
    int colSize = 3;

    ultaDiagonalWiseSum(arr, rowSize, colSize);

    return 0;
}