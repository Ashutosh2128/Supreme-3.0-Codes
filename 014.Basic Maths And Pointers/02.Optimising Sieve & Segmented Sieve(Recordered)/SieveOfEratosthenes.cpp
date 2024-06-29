#include<iostream>
#include<vector>
using namespace std;

vector<bool> Sieve(int n) {
    //create a bool type vector mark its all element as true
    vector<bool> sieve(n, true);
    //mark first and second element means 0 and 1 as false, cuz they are not prime
    sieve[0] = sieve[1] = false;

    for(int i = 2; i < n; i++) {
        if(sieve[i] == true) {
            int j = i*2;

            while(j < n) {
                sieve[j] = false;
                j += i;
            }
        }
    }

    return sieve;
}

int main() {
    int n;
    cout << "Enter the number range in between which you want to count prime" << endl;
    cin >> n;

    vector<bool> ans = Sieve(n);

    cout << "Present prime numbers in between 1 to " << n << " is: " << endl;
    for(int i = 0; i < n; i++) {
        if(ans[i] == 1) {
            cout << i << " ";
        }
    }

    return 0;
}