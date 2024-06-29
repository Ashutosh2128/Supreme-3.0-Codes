#include <iostream>
using namespace std;

void rowWiseSum(int arr[][4], int rowSize, int colSize) {
    for(int row = 0; row < rowSize; row++) {
        int rowSum = 0;

        for(int col = 0; col < colSize; col++) {
            rowSum += arr[row][col];
        }

        cout << row+1 << " row sum = " << rowSum << endl;
    }
}

int main() {
    //Initialisation
    int arr[3][4] = {
                    {40, 10, 30, 20},
                    {25, 15, 79, 31},
                    {50, 46, 23, 68}
                    };

    int rowSize = 3;
    int colSize = 4;

    rowWiseSum(arr, rowSize, colSize);

    return 0;
}