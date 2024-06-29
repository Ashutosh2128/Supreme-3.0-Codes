#include <iostream>
using namespace std;

int findMaximun(int arr[][4], int rowSize, int colSize) {
    int maxVal = INT_MIN;

    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            maxVal = max(maxVal, arr[row][col]);
        }
    }

    return maxVal;
}

/*int findMaximun(int arr[][4], int rowSize, int colSize) {
    int maxVal = INT_MIN;

    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            if(arr[row][col] > maxVal) {
                maxVal = arr[row][col];
            }
        }
    }

    return maxVal;
}*/

int main() {
    //Initialisation
    int arr[3][4] = {
                    {40, 10, 30, 20},
                    {25, 15, 79, 31},
                    {50, 46, 23, 68}
                    };

    int rowSize = 3;
    int colSize = 4;

    int max = findMaximun(arr, rowSize, colSize);

    cout << "Minimum element in the 2d array is: " << max << endl;

    return 0;
}