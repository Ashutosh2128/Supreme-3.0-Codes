#include <iostream>
using namespace std;

int main() {
    cout << "First Observation" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = i; j < 4; j++) {
            cout << i << " " << j << endl;
        }
    }
    cout << endl << endl << endl;


    cout << "Second Observation" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < i; j++) {
            cout << i << " " << j << endl;
        }
    }
    cout << endl << endl << endl;


    cout << "Third Observation" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j <= i; j++) {
            cout << i << " " << j << endl;
        }
    }
    cout << endl << endl << endl;


    cout << "Fourth Observation" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 4-1; j >= 0; j--) {
            cout << i << " " << j << endl;
        }
    }
    cout << endl << endl << endl;


    cout << "Fifth Observation" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 4-1; j > i; j--) {
            cout << i << " " << j << endl;
        }
    }
    cout << endl << endl << endl;


    cout << "Sixth Observation" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = i+1; j < 4; j++) {
            cout << i << " " << j << endl;
        }
    }
    cout << endl << endl << endl;

    return 0;
}