#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void print(vector<int> v) {
//     int n = v.size();

//     for(int i = 0; i < n; i++) {
//         cout << v[i] << " ";
//     } cout << endl;
// }

void printVV(vector<vector<int>> v) {
    for(int i = 0; i < v.size(); i++) {
        vector<int>& temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
    } cout << endl;
}

// bool myComp(int& a, int& b) {
//     //return a < b; //sort in increasing order
//     return a > b; //sort in decreasing order
// }

bool myComp(vector<int>& a, vector<int>& b) {
    //return a[1] > b[1]; //decreasing order
    return a[1] < b[1]; //increasing order
}

int main() {
    // vector<int> v = {44, 55, 22, 11, 33};

    // sort(v.begin(), v.end()); // sort in increasing order
    // sort(v.begin(), v.end(), myComp);
    // print(v);



    //vector of vector sorting
    vector<vector<int>> v;
    cout << "Enter Size: " << endl;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b;
        cout << "Enter a, b: " << endl;
        cin >> a >> b;

        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }

    cout << endl << "Here are the values" << endl;
    printVV(v);

    cout << "Sorting with respect to first index" << endl;
    sort(v.begin(), v.end()); //this is default sorting
    printVV(v);

    cout << "Sorting with respect to second index" << endl;
    sort(v.begin(), v.end(), myComp); //using comparator
    printVV(v);





    return 0;
}