#include <iostream>
using namespace std;

/*void transposeMatrix(int arr[][3], int rowSize, int colSize) {
    int ans[rowSize][colSize];

    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            ans[row][col] = arr[col][row];
        }
    }

    cout << "Printing matrix ater transpose: " << endl;
    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            cout << ans[row][col] << " ";
        } cout << endl;
    } cout << endl << endl;
}*/

void transposeMatrix(int arr[][3], int rowSize, int colSize) {
    for(int row = 0; row < rowSize; row++) {
        for(int col = row; col < colSize; col++) {
            swap(arr[row][col], arr[col][row]);
        }
    }

    cout << "Printing matrix ater transpose: " << endl;
    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            cout << arr[row][col] << " ";
        } cout << endl;
    } cout << endl << endl;
}

int main() {
    int arr[3][3] = {
                    {40, 10, 30},
                    {25, 15, 79},
                    {50, 46, 23}
                    };

    int rowSize = 3;
    int colSize = 3; 

    

    cout << "Printing matrix before transpose: " << endl;
    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            cout << arr[row][col] << " ";
        } cout << endl;
    } cout << endl << endl;

    transposeMatrix(arr, rowSize, colSize);

    return 0;
}