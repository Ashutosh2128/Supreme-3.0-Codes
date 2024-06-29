#include <iostream>
using namespace std;

bool checkPrime(int n) {
    if(n <= 1) {
        return false;
    }

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }

    //if i'm here that means n is not divided with anyone
    return true;
}

int main() {
    int n;

    cout << "Enter n: " << endl;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        //let's check i is prime or not
        bool isPrime = checkPrime(i);

        //if i is prime
        if(isPrime) {
            cout << "Prime: " << i  << endl;
        } else {
            cout << "Not prime: " << i << endl;
        }
    }

    return 0;
}