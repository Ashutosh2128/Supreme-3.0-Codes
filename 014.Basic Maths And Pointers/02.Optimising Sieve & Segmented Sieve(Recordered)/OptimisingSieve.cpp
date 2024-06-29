#include<iostream>
#include<vector>
using namespace std;

vector<bool> optimizingSieve(int n) {
    //create a bool type vector mark its all element as true
    vector<bool> sieve(n, true);
    //mark first and second element means 0 and 1 as false, cuz they are not prime
    sieve[0] = sieve[1] = false;

    for(int i = 0; i*i <= n; i++) { //Optimization 2
        if(sieve[i] == 1) {
            int j = i*i; //Optimization 1

            while(j <= n) {
                sieve[j] = 0;
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

    vector<bool> ans = optimizingSieve(n);

    cout << "Present prime numbers in between 1 to " << n << " is: " << endl;
    for(int i = 0; i < n; i++) {
        if(ans[i] == 1) {
            cout << i << " ";
        }
    }

    return 0;
}