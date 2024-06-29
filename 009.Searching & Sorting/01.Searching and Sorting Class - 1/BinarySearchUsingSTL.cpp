#include <iostream>
#include <algorithm> //Must have to use this #include directory
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;

    int target = 10;

    bool ans = binary_search(arr, arr+n, target);

    cout << "Found: " << ans << endl;

    return 0;
}