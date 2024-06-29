#include <iostream>
using namespace std;

void extreamPrint(int arr[], int n) {
    int i = 0;
    int j = n-1;

    while(i <= j) {
        //if i==j then for printing one time
        if(i == j) {
            cout << arr[i] << " "; //cout << arr[j] << " ";
            break;
        }

        cout << arr[i] << " ";
        i++;
        cout << arr[j] << " ";
        j--;
    }
}

int main() {
    int arr[7] = {7, 1, 6, 22, 23, 55, 2};
    int n = 7;

    extreamPrint(arr, n);

    return 0;
}