#include <iostream>
using namespace std;

int division(int dividend, int divisor) {
    int s = 0;
    int e = dividend;

    int ans = 0;

    int mid = s + ((e-s) >> 1);

    while(s <= e) {
        if(divisor * mid == dividend) {
            return mid;
        }
        else if(divisor * mid < dividend) {
            ans = mid;
            s = mid+1;
        }
        else if(divisor * mid > dividend) {
            e = mid-1;
        }

        mid = s + ((e-s) >> 1);
    }

    return ans;
}

double morePrecision(int dividend, int divisor, int quotient, int precision) {
    double ans = quotient;
    double step = 1;

    for(int i = 0; i < precision; i++) {
        step /= 10;

        for(double j = ans+step; divisor*j <= dividend; j += step) {
            ans += step;
        }
    }

    return ans;
}

int main() {
    int dividend, divisor;
    cout << "Enter the value of Dividend and Divisor respectively: " << endl;
    cin >> dividend >> divisor;

    int quotient = division(abs(dividend), abs(divisor));
    //cout << quotient << endl;

    int precision;
    cout << "Enter the number of precision you want: " << endl;
    cin >> precision;

    double precisionQutient = morePrecision(abs(dividend), abs(divisor), quotient, precision);

    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
        precisionQutient = 0 - precisionQutient;
    }

    cout << dividend << " divided by " << divisor << " = " << precisionQutient << endl;

    return 0;
}