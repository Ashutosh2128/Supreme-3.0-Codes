#include<iostream>
using namespace std;

int main() {
    int arr[3][5];

    int (*n)[3][5] = &arr;


    return 0;
}