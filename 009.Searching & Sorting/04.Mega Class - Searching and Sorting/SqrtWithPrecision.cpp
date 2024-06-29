#include <iostream>
using namespace std;

int sqrtNum(int n) {
    int s = 0;
    int e = n;

    int ans = 0;

    while(s <= e) {
        int mid = s + (e-s) / 2;
        int product = mid*mid;

        if(product == n) {
            return mid;
        }
        else if(product < n) {
            ans = mid;
            s = mid+1;
        }
        else if(product > n) {
            e = mid-1;
        }
    }

    return ans;
}

double morePrecision(int n, int sqrtNum, int precision) {
    double ans = sqrtNum;
    float step = 1;

    for(int i = 0; i < precision; i++) {
        step = step / 10;

        for(double j = ans+step; j*j <= n; j += step) {
            ans += step;
        }
    }

    return ans;
}

int main() {
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    int sqrt = sqrtNum(num);
    //cout << sqrt << endl;

    int precision;
    cout << "Enter the number of precision in sqrt:" << endl;
    cin >> precision;

    double ans = morePrecision(num, sqrt, precision);

    cout << "Sqrt of number " << num << " is: " << ans << endl; 
    //here in uppar line cout can only print upto 5 precision so we can use printf() function of c language for printing

    return 0;
}