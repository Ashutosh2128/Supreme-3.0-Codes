#include <iostream>
using namespace std;

void threeSum(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == target) {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

int main() {
    int arr[6] = {23, 10, 2, 5, 1, 19};
    int n = 6;
    int target = 30;

    threeSum(arr, n, target);

    return 0;
}