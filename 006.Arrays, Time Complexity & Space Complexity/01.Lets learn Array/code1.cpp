#include <iostream>
using namespace std;

int main() {



    //fill() method
    int arr[5]; //Initialisation

    fill(arr, arr+5, 28);

    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;







    // int arr[10];
    // //error
    // //int brr[];

    // int crr[] = {10, 34, 48, 70};
    // int drr[4] = {0};

    // cout << drr[0] << endl;
    // cout << crr[3] << endl;



    /*int arr[5];
    
    //Input
    for(int index = 0; index < 5; index++) {
        cout << "Enter the value for box index: " << index << endl;\
        cin >> arr[index];
    }

    //Output
    for(int index = 0; index < 5; index++) {
        cout << arr[index] << " ";
    }
    cout << endl;*/

    return 0;
}