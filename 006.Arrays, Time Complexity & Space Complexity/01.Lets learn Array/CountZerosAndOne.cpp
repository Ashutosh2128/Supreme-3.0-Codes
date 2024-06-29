#include<iostream>
using namespace std;

void countZeroAndOne(int arr[], int n) {
    int zeroCount = 0;
    int oneCount = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            zeroCount++;
        }

        if(arr[i] == 1) {
            oneCount++;
        }
    }

    cout << "Number of zero: " << zeroCount << endl;
    cout << "Number of one: " << oneCount << endl;
}

int main() {
    int arr[10] = {1, 0, 1, 0, 1, 1, 0, 1, 0, 1};
    int n = 10;

    countZeroAndOne(arr, n);

    return 0;
}