#include <iostream>
using namespace std;

void twoSum(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << arr[i] << ", " << arr[j] << endl;
            }
        }

    }
}

int main() {
    int arr[5] = {10, 5, 20, 15, 30};
    int n = 5;
    int target = 35;

    twoSum(arr, n, target);

    return 0;
}