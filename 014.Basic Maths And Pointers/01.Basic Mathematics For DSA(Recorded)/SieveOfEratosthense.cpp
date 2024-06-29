#include<iostream>
using namespace std;

int countPrime(int n) {
    if(n == 0 || n == 1)
        return 0;

    bool prime[n];

    fill(prime, prime+n, true);
    // for(int i = 0; i < n; i++) {
    //     prime[i] = true;
    // }

    int count = 0;
    prime[0] = prime[1] = 0;

    for(int i = 1; i < n; i++) {
        if(prime[i]) {
            count++;

            int j = i * 2;
            while(j < n) {
                prime[j] = false;
                j += i;
            }
        }
    }

    return count;
}

int main() {
    int n;
    cout << "Enter the number in between which you want to count prime: " << endl;
    cin >> n;

    int count = countPrime(n);

    cout << "Total number of prime count in between 1 to " << n << " is: " << count << endl;

    return 0;
}