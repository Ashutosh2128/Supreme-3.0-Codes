//We have to find Quotient through Dividend and Division without using "/" and "%" operator


#include <iostream>
using namespace std;

int findQuotient(int dividend, int divisor) {
    int s = 0;
    int e = dividend;

    int mid = s + (e - s) / 2;
    int ans = -1;

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

        mid = s + (e - s) / 2;
    }

    return ans;
}

int main() {
    int dividend, divisor;
    cout << "Enter value of dividend and divisor: " << endl;
    cin >> dividend >> divisor;

    int quotient = findQuotient(abs(dividend), abs(divisor));

    if(dividend < 0 && divisor < 0) {
        quotient = 0 + quotient;
    }
    else if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
        quotient = 0 - quotient;
    }

    cout << dividend << " divided by " << divisor << " = " << quotient << endl;

    return 0;
}