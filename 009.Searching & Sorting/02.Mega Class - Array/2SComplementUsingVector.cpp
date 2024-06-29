#include <iostream>
#include <vector>
using namespace std;

vector<int> findTwosComp(vector<int> binary) {
    int n = binary.size();

    //Initialize vector twosComp with value 0 and size n+1
    vector<int> twosComp(n+1, 0);

    //step-1: invert 0 to 1 and 1 to 0
    for(int i = 0, j = 1; i < n; i++, j++) {
        if(binary[i] == 0) {
            twosComp[j] = 1;
        }
        if(binary[i] == 1) {
            twosComp[j] = 0;
        }
    }

    //step-2: add 1
    int carry = 1;

    for(int i = twosComp.size() - 1; i >= 0; i--) {
        int sum = twosComp[i] + carry;
        twosComp[i] = sum % 2;
        carry = sum / 2;
    }

    return twosComp;
}

int main() {
    vector<int> binary = {1, 0, 1, 0, 0, 0, 1, 1, 0, 1};

    vector<int> twosComp = findTwosComp(binary);

    cout << "2's complement: " << endl;

    if(twosComp[0] == 1) {
        for(int i = 0; i < twosComp.size(); i++) {
            cout << twosComp[i] << " ";
        }
    }
    else {
        for(int i = 1; i < twosComp.size(); i++) {
            cout << twosComp[i] << " ";
        }
    }
    
    return 0;
}