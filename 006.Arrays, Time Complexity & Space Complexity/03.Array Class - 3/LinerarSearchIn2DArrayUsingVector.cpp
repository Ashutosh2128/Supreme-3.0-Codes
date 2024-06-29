#include <iostream>
#include <vector>
using namespace std;

bool searchIn2DVector(vector<vector<int>> arr, int target) {
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            if(arr[row][col] == target) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    //Initialisation
    vector<vector<int>> arr(3, vector<int>(4));
    int rowSize = arr.size();
    int colSize = arr[0].size();

    //Taking input
    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            cout << "Taking input for (" << row << ", " << col << "): ";
            cin >> arr[row][col];
        }
    }

    int target;
    cout << "Enter the target you want to search: ";
    cin >> target;

    bool ans = searchIn2DVector(arr, target);

    if(ans) {
        cout << target << " found" << endl;
    }
    else {
        cout << target << " not found" << endl;
    }

    return 0;
}