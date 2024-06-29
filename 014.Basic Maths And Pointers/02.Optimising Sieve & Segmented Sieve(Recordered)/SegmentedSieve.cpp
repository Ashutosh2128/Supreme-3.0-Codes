#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

vector<bool> optimizingSieve(int n) {
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for(int i = 2; i*i <= n; i++) {
        if(sieve[i] == true) {
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
    //get the prime in between sqrt of R with the help of npormal sieve, which helps to find prime between the range later
    vector<bool> sieve = optimizingSieve(sqrt(R));

    vector<int> basePrime;

    for(int i = 0; i < sieve.size(); i++) {
        if(sieve[i] == true) {
            basePrime.push_back(i);
        }
    }

    vector<bool> segSieve((R-L+1), true);

    if(L == 0 || L == 1) {
        segSieve[L] = false;
    }

    for(auto prime: basePrime) {
        int first_mul = (L / prime) * prime;

        if(first_mul < L) {
            first_mul += prime;
        }

        int j = max(first_mul, prime*prime);

        while(j <= R) {
            segSieve[j - L] = false; // [j - L] is used to find the vector index, cuz directly it indicating to the numbers
            j += prime;
        }
    }

    return segSieve;
}

int main() {
    int L, R;
    cout << "Enter the range in between which you want to find primes" << endl;
    cin >> L >> R;

    vector<bool> segsieve = segmentedSieve(L, R);

    for(int i = 0; i < segsieve.size(); i++) {
        if(segsieve[i] == true) {
            cout << i + L << " ";
        }
    }  

    return 0;
}