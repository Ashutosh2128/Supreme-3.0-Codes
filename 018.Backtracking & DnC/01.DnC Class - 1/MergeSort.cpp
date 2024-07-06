#include<iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e) {
    int nLeft = mid - s + 1;
    int nRight = e - mid;

    //dynamically two array created
    int* leftArr = new int[nLeft];
    int* rightArr = new int[nRight];

    //copying the main array element to the left and right array respectively
    int arrayIndex = s;

    //copying the value from s to mid to the left array
    for(int i = 0; i < nLeft; i++) {
        leftArr[i] = arr[arrayIndex++];
    }

    //no need to change arrayIndex value. By defaultly it reach to the mid+1 index
    //copying the value from mid+1 to e to the right array
    for(int i = 0; i < nRight; i++) {
        rightArr[i] = arr[arrayIndex++];
    }

    //Now it's time to merge two sorted array
    int leftIndex = 0;
    int rightIndex = 0;
    arrayIndex = s;

    while(leftIndex < nLeft && rightIndex < nRight) {
        if(leftArr[leftIndex] < rightArr[rightIndex]) {
            arr[arrayIndex++] = leftArr[leftIndex++];
        }
        else {
            arr[arrayIndex++] = rightArr[rightIndex++];
        }
    }

    //if leftArr having remaining elements, then just copy
    while(leftIndex < nLeft) {
        arr[arrayIndex++] = leftArr[leftIndex++];
    }

    //if rightArr hsving remaining elements, then just copy
    while(rightIndex < nRight) {
        arr[arrayIndex++] = rightArr[rightIndex++];
    }

    //We creat the leftArr and rightArr dynamically, so deleting it is a good practice
    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int arr[], int s, int e) {
    //Base case
    if(s >= e)
        return;

    int mid = s + (e-s)/ 2;

    //left side sort
    mergeSort(arr, s, mid);

    //right side sort
    mergeSort(arr, mid+1, e);

    //merge or combine two sorted array
    merge(arr, s, mid, e); //In initial call of merge we are sending 2 array element to the function
    //while array element is 1 we are just returning from the mergeSort function, then starting merge from array having 2 element
}

int main() {
    int arr[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int n = 8;

    int s = 0;
    int e = n-1;

    cout << endl << "Printing Array before sort" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    mergeSort(arr, s, e);

    cout << endl << "Printing Array after sort" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}