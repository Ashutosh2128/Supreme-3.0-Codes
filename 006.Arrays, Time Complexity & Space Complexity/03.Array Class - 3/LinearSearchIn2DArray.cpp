#include <iostream>
using namespace std;

bool searchIn2DArray(int arr[][4], int rowSize, int colSize, int target) {
    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            if(arr[row][col] == target) {
                return true;
            }
        }
    }

    //If we reached here that means target not found
    return false;
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

    int target;
    cout << "Enter the target you want to search: " << endl;
    cin >> target;

    bool ans = searchIn2DArray(arr, rowSize, colSize, target);

    if(ans) {
        cout << "Target found" << endl;
    }
    else {
        cout << "Target not found" << endl;
    }

    return 0;
}