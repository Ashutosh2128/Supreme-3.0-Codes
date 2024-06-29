#include <iostream>
using namespace std;

void findMaximum(int arr[], int n) {
    int max = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    cout << "Maximun element: " << max << endl;
}

int main() {
    int arr[6] = {7, 1, 6, 23, 55, 2};
    int n = 6;

    findMaximum(arr, n);

    return 0;
}