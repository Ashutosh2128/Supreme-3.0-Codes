#include <iostream>
using namespace std;

int main() {
    // int budget;
    // cout << "Enter your budget: " << endl;

    // //input
    // cin >> budget;

    // if(budget > 2000000) {
    //     cout << "You can buy Scropio" << endl;
    // }
    // else {
    //     cout << "You can not buy Scropio" << endl;
    // }

    // int marks = 65;

    // if(marks > 90) {
    //     cout << "A";
    // }
    // else if(marks > 80) {
    //     cout << "B";
    // }
    // else if(marks > 70) {
    //     cout << "C";
    // }
    // else if(marks > 60) {
    //     cout << "D";
    // }
    // else {
    //     cout << "You Failed" << endl;
    // }

    int height;
    cout << "ENter height: " << endl;
    cin >> height;

    int weight;
    cout << "Enter your weight: " << endl;
    cin >> weight;

    if(height > 5) {
        if(weight > 70) {
            cout << "You got a good BMI" << endl;
        }
        else {
            cout << "BHai tujhse na hopaega" << endl;
        }
    }
    else {
        cout << "Complain dila ta hu" << endl;
    }

    return 0;
}