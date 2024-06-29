#include<iostream>
using namespace std;

int main() {

    //2d array -> stack
    // int arr[2][2] = {
    //                     {1, 2}, 
    //                     {3, 4}
    //                 };

    //2d array creation in heap memory
    int** arr = new int* [4]; //4 is row value

    for(int i = 0; i < 4; i++) {
        arr[i] = new int[3]; //3 is column value
    }

    //taking input
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    //printing output
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }











    // //array -> stack'
    // int arr[5];
    // cout << arr[0] << arr[1] << arr[2] << endl;


    // //array -> heap
    // int* brr = new int[5];
    // cout << brr[0] << brr[1] << brr[2] << endl;





    // //integer -> stack memory
    // int a = 5;
    // cout << a << endl;

    // //integer -> heap memory
    // int* p = new int;
    // *p = 5;
    // cout << *p << endl;
    // delete p; //free



    return 0;
}