#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << endl;
}

void findTwosComp(int arr[], int n, int twosComp[], int m) {
    //step-1: invert all 0 to 1 and 1 to 0
    for(int i = 0, j = 1; i < n; i++, j++) {
        twosComp[j] = arr[i] == 0 ? 1 : 0;
    }

    //step-2: add 1
    int carry = 1;

    for(int i = m-1; i >= 0; i--) {
        int sum = twosComp[i] + carry;
        twosComp[i] = sum % 2;
        carry = sum / 2;
    }

    //not need of those three following lines
    // if(carry) {
    //     twosComp[0] = carry;
    // }
}

int main() {
    int arr[1000];

    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;

    cout << endl << "Taking binary input in the array arr:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //created an array to store two's complement. Initialise with all value 0
    int m = n+1;
    int twosComp[m] = {0}; //size = n+1, to store carry initialise with 1 extra size

    cout << endl << "Printing numbers before two's complement: " << endl;
    printArray(arr, n);

    findTwosComp(arr, n, twosComp, n+1);

    cout << endl << "Printing numbers after two's complement: " << endl;
    if(twosComp[0] == 1) {
        printArray(twosComp, m);
    }
    else { //here we eleminating the first index if it is 0 from the start
        printArray(twosComp+1, m-1);
    }
    

    return 0;
}