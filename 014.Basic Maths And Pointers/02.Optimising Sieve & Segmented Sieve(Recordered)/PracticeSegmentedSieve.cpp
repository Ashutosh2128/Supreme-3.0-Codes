#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<bool> optimizingSieve(int n) {
    //create vector of n+1 size, cuz if creat of size n vector will go 0 to (n-1)
    //But we need to goes vector from 0 to n
    vector<bool> sieve(n+1, true);
    sieve[0] = sieve[1] = false;

    for(int i = 2; i*i <= n; i++) {
        if(sieve[i]) {
            int j = i*i;

            while(j <= n) {
                sieve[j] = false;
                j += i;
            }
        }
    }

    return sieve;
}

vector<bool> segmentedSieve(int L, int R) {
    vector<bool> sieve = optimizingSieve(sqrt(R));
    vector<int> basePrimes;

    for(int i = 0; i < sieve.size(); i++) {
        if(sieve[i]) {
            basePrimes.push_back(i);
        }
    }

    vector<bool> segSieve(R-L+1, true);
    if(L == 0 || L == 1) {
        segSieve[L] = false;
    }

    for(int i = 0; i < basePrimes.size(); i++) {
        int first_mul = (L / basePrimes[i]) * basePrimes[i];

        first_mul = first_mul < L ? first_mul + basePrimes[i] : first_mul;

        int j = max(first_mul, basePrimes[i]*basePrimes[i]);

        while(j <= R) {
            segSieve[j - L] = false;
            j += basePrimes[i];
        }
    }

    return segSieve;
}

int main() {
    int L, R;
    cout << "Enter the range between which you want to find prime:" << endl;
    cin >> L >> R;

    vector<bool> segSieve = segmentedSieve(L, R);

    cout << "Primes in between " << L << " and " << R << " are: " << endl;
    for(int i = 0; i < segSieve.size(); i++) {
        if(segSieve[i]) {
            cout << i + L << " ";
        }
    }

    return 0;
}