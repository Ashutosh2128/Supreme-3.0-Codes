#include<iostream>
#include<vector>
using namespace std;

void mergeArray(int arr[], int nArr, int brr[], int nBrr, vector<int>& ans) {
    int i = 0;
    int j = 0;

    while(i < nArr && j < nBrr) {
        if(arr[i] < brr[j]) {
            ans.push_back(arr[i++]);
        }
        else {
            ans.push_back(brr[j++]);
        }
    }

    while(i < nArr) {
        ans.push_back(arr[i++]);
    }

    while(j < nBrr) {
        ans.push_back(brr[j++]);
    }
}

int main() {
    int arr[] = {1, 3, 5, 6, 7, 9, 10};
    int nArr = 7;

    int brr[] = {2, 4, 8, 11};
    int nBrr = 4;

    vector<int> ans;

    mergeArray(arr, nArr, brr, nBrr, ans);

    cout <<endl << "Printing Merge Sorted Array" << endl;
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    } cout << endl << endl;


    return 0;
}