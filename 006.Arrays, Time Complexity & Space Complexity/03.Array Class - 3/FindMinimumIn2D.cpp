#include <iostream>
using namespace std;

int findMinimun(int arr[][4], int rowSize, int colSize) {
    int minVal = INT_MAX;

    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            minVal = min(minVal, arr[row][col]);
        }
    }

    return minVal;
}

/*int findMinimun(int arr[][4], int rowSize, int colSize) {
    int minVal = INT_MAX;

    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            if(arr[row][col] < minVal) {
                minVal = arr[row][col];
            }
        }
    }

    return minVal;
}*/

int main() {
    //initialise
    int arr[3][4] = {
                    {40, 10, 30, 20},
                    {25, 15, 79, 31},
                    {50, 46, 23, 68}
                    };

    int rowSize = 3;
    int colSize = 4;

    int min = findMinimun(arr, rowSize, colSize);

    cout << "Minimum element in the 2d array is: " << min << endl;

    return 0;
}