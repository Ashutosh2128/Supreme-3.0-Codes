#include <iostream>
using namespace std;

int main() {

    // for(int i = 1; i <= 5; i = i+1) {
    //     cout << i << " ";
    // }

    // cout << endl;

    // int i = 1;

    // do {
    //     //logic
    //     cout << i << " ";
    //     //updation
    //     i = i + 1;
    // } while( i <= 5);

    // for(int i = 1; i <= 3; i++) {
    //     for(int j = 1; j <= 3; j++) {
    //         cout << "i: " << i << ", j: " << j << endl;
    //     }
    // }

    for(int i = 1; i <= 2; i = i+1) {
        for(int j = 1; j <= 2; j = j+1) {
            cout << i*j << " ";
        }
    }

    return 0;
}