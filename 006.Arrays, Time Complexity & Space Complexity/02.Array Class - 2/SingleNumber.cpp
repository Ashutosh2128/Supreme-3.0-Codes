#include <iostream>
using namespace std;

int singleNumber(int arr[], int n) {
    int ans = 0;

    for(int i = 0; i < n; i++) {
        ans ^= arr[i];
    }

    return ans;
}

int main() {
    int arr[7] = {1, 2, 3, 5, 2, 3, 1};
    int n = 7;

    int ans = singleNumber(arr, n);

    cout << "Different single nymber in the array is: " << ans << endl;

    return 0;
}