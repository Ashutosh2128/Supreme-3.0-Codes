#include <iostream>
using namespace std;

void colWiseSum(int arr[][4], int rowSize, int colSize) {
    for(int col = 0; col < colSize; col++) {
        int colSum = 0;

        for(int row = 0; row < rowSize; row++) {
            colSum += arr[row][col];
        }

        cout << col+1 << "column sum = " << colSum << endl;
    }
}

int main() {
    int arr[3][4] = {
                    {40, 10, 30, 20},
                    {25, 15, 79, 31},
                    {50, 46, 23, 68}
                    };

    int rowSize = 3;
    int colSize = 4;

    colWiseSum(arr, rowSize, colSize);

    return 0;
}