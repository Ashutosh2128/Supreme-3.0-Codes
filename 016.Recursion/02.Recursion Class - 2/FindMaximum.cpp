#include<iostream>
using namespace std;

int findMax(int arr[], int n, int index, int maxi) {
    if(index == n) return maxi;

    maxi = max(arr[index], maxi);

    int ans = findMax(arr, n, index+1, maxi);
    
    return ans;
}

int main() {
    int arr[] = {23, 34, 45, 12, 67, 89, 32, 21, 56, 65};
    int n = 10;
    int index = 0;

    int maxi = -50;

    int ans = findMax(arr, n, index, maxi);

    cout << "Maximum element is: " << ans << endl;


    return 0;
}