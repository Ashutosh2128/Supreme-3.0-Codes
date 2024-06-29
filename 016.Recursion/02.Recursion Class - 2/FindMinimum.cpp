#include<iostream>
using namespace std;

int findMin(int arr[], int n, int index, int mini) {
    if(index == n) return mini;

    mini = min(arr[index], mini);

    int ans = findMin(arr, n, index+1, mini);
    return ans;
}

int main() {
    int arr[] = {23, 34, 45, 12, 67, 89, 32, 21, 56, 65};
    int n = 10;
    int index = 0;

    int mini = 100000;

    int ans = findMin(arr, n, index, mini);

    cout << "Minimum element is: " << ans << endl;

    return 0;
}