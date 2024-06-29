#include <iostream>
#include <assert.h> //used for Fancy pattern #1
using namespace std;




int numberUsingDigit(int numberOfDigit) {
    int num = 0;

    for(int i = 0; i < numberOfDigit; i++) {
        int digit;
        cout << "Enter the digit: " << endl;
        cin >> digit;

        num = num * 10 + digit;
        cout << "Number created so far: " << num << endl << endl;
    }

    return num;
}




//count number of set bit
/*int setBit(int n) {
    int cnt = 0;

    while(n) {
        if((n & 1) == 1) {
            cnt++;
        }

        n = n >> 1;
    }

    return cnt;
}*/





//Set Kth bit
/*int setKthBit(int n, int k) {
    return n | (1 << k);
}*/






//Reverse Integer
/*int reverse(int n) {
    int ans = 0;

    while(n) {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }

    return ans;
}*/





//Print all prime in between 1 to n
/*bool checkPrime(int n) {
    for(int i = 2; i < n; i++) {
        if((n % i) == 0) {
            return false;
        }
    }

    //If we reached here that means loop is end
    //that means n is divided with any number between 2 to (n-1)
    //that means n is only can divided by 1 and n
    //that means it is true that n is prime
    return true;
}*/




//Check prime or not
/*bool isPrime(int n) {
    for(int i = 2; i < n; i++) {
        if((n % i) == 0) {
            return false;
        }
    }

    //If we reached here that means loop is end
    //that means n is divided with any number between 2 to (n-1)
    //that means n is only can divided by 1 and n
    //that means it is true that n is prime
    return true;
}*/







//Find Factorial
/*long long int factorial(long long int n) {
    long long int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}*/






//Given number is even or odd(Bitwise Method)
/*bool checkEvenOrOdd(int n) {
    if(n & 1) {
        return false;
    }
    else {
        return true;
    }
}*/





//Given number is even or odd(Normal Method)
/*bool checkEvenOrOdd(int n) {
    if(n % 2 == 0) {
        return true
    }
    else {
        return false;
    }
}*/






//Display Area of circle
/*float circleArea(float radius) {
    float area = 3.14 * radius * radius;

    return area;
}*/





//Print all digit of an integer
/*void printDigit(int n) {
    if(n == 0)
        return;
        
    int digit = n % 10;

    printDigit(n/10);

    cout << digit << " ";
}*/




//KM To Miles
/*float KMToMiles(float km) {
    float _1kmMile = 0.621371;

    float miles = km * _1kmMile;

    return miles;
}*/

int main() {




    //Create number using digits
    int numberOfDigit;
    cout << "Enter the number of digit: " << endl;
    cin >> numberOfDigit;

    int ans = numberUsingDigit(numberOfDigit);

    cout << "Final number is: " << ans << endl;






    //count number of set bit
    /*int n;
    cin >> n;

    cout << "Number of set bit in " << n << " is: " << setBit(n) << endl;*/






    //Set Kth bit
    /*int n, k;
    cin >> n >> k;

    cout << "After setting " << k << " number of bit in " << n << " final answer is: " << setKthBit(n, k) << endl;*/







    //Reverse Integer
    /*int n;
    cin >> n;

    cout << "Reverse of " << n << " is: " << reverse(n) << endl;*/








    //Print all prime in between 1 to n
    /*int n;
    cin >> n;

    cout << "Prime numbers between 1 to " << n << ": " << endl;

    for(int i = 2; i <= n; i++) {
        bool isPrime = checkPrime(i);

        if(isPrime) {
            cout << i << " ";
        }
    }*/







    //Check prime or not
    /*int n;
    cin >> n;

    bool ans = isPrime(n);

    if(ans) {
        cout << n << " is prime" << endl;
    }
    else {
        cout << n << " is not prime" << endl;
    }*/






    //Find Factorial
    /*long long int n;
    cin >> n;

    long long int fact = factorial(n);

    cout << "Factorial of " << n << ": " << fact << endl;*/






    //Given number is even or odd(Normal method and Bitwise method)
    /*int n;
    cin >> n;

    bool isEven = checkEvenOrOdd(n);

    if(isEven) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }*/






    //Display Area of circle
    /*float radius;
    cout << "Enter radius of the circle: " << endl;
    cin >> radius;

    float area = circleArea(radius);

    cout << "Area of the circle = " << area << endl;*/









    //Print all digit of an integer
    /*int n;
    cout << "Enter the integer value: " << endl;
    cin >> n;

    cout << "printing digits: " << endl;
    printDigit(n);*/







    //KM To Miles
    /*float km;
    cout << "Enter Kilometers: ";
    cin >> km;

    float miles = KMToMiles(km);

    cout << km << " km = " << miles << " miles" << endl;*/






    //Butterfly Pattern
    /*int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    //uppar half
    for(int row = 0; row < n; row++) {
        //uppar left half stars
        for(int star = 0; star < row+1; star++) {
            cout << "* ";
        }

        //uppar spaces
        for(int space = 0; space < 2 * (n - row - 1); space++) {
            cout << "  "; //has double spaces
        }

        //uppar right half stars
        for(int star = 0; star < row+1; star++) {
            cout << "* ";
        }

        cout << endl;
    }

    //Lower half
    for(int row = 0; row < n; row++) {
        //lower left half stars
        for(int star = 0; star < n-row; star++) {
            cout << "* ";
        }

        //lower spaces
        for(int space = 0; space < 2 * row; space++) {
            cout << "  "; //has double spaces
        }

        //lower right half stars
        for(int star = 0; star < n-row; star++) {
            cout << "* ";
        }

        cout << endl;
    }*/








    //Pascal's Triangle Pattern
    /*int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    for(int row = 1; row <= n; row++) {
        int c = 1;

        for(int col = 1; col <= row; col++) {
            cout << c << " ";
            c = c * (row - col) / col;
        }

        cout << endl;
    }*/










    //Floyd's Triangle Pattern
    /*int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int count = 1;

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < row+1; col++) {
            //cout << "*";
            cout << count << " ";
            count++;
        }

        cout << endl;
    }*/










    //Fancy Pattern #3
    /*int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    cout << "*" << endl;

    for(int row = 0; row < n; row++) {
        cout << "*";
        int cond = row <= n/2 ? 2*row : 2*(n-row-1);
                           //growing row    //shrinking row

        for(int col = 0; col < cond+1; col++) {
            //cout << "*";
            if(col <= cond/2) { //growing column
                cout << col+1;
            }
            else { //Shrinking column
                //cout << "*";
                cout << cond - col + 1;
            }
        }

        cout << "*";
        cout << endl;
    }
    cout << "*" << endl;*/








    //Fancy Pattern #2
    /*int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    //growing phase
    int c = 1;
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < row+1; col++) {
            //cout << "*";
            cout << c;
            c++;

            if(col < row) {
                cout << "*";
            }
        }

        cout << endl;
    }

    //cout << "C: " << c << endl;

    //Shrinking phase
    int start = c - n;
    for(int row = 0; row < n; row++) {
        int k = start;

        for(int col = 0; col < n-row; col++) {
            cout << k;
            k++;

            if(col < n-row-1) {
                cout << "*";
            }
        }

        start = start - (n - row - 1);
        cout << endl;
    }*/









    //Fancy Pattern #1
    /*int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    // if(n > 9) {
    //     cout << "Please enter vslue which is less than or equal 9" << endl;
    //     return 0;
    // }

    assert(n <= 9);

    for(int row = 0; row < n; row++) {
        int start_num = 8-row;
        int num = row+1;
        int count_num = num;

        for(int col = 0; col < 17; col++) {
            //cout << "*";

            if(col == start_num && count_num > 0) {
                cout << num;
                start_num += 2;
                count_num--;
            }
            else {
                cout << "*";
            }
        }

        cout << endl;
    }*/









    //Solid Half Diamond 2
    /*int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    //Uppar half star
    for(int row = 0; row < n; row++) {
        for(int star = 0; star < row+1; star++) {
            cout << "* ";
        }

        cout << endl;
    }

    //Lower Half star
    for(int row = 0; row < n-1; row++) {
        for(int star = 0; star < n-row-1; star++) {
            cout << "* ";
        }

        cout << endl;
    }*/








    //Solid Half Diamond
    /*int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    for(int row = 0; row < 2*n-1; row++) {
        // int cond = 0;

        // if(row < n) { //Growing phase of diamond
        //     cond = row;
        // }
        // else {//Shrinking phase of diamond
        //     cond = n - (row%n) - 2;
        // }

        int cond = row < n ? row : n - (row%n) - 2;

        for(int col = 0; col <= cond; col++) {
            cout << "*";
        }

        cout << endl;
    }*/










    //Numeric Palindrome Equilateral Pyramid
    /*int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    for(int row = 0; row < n; row++) {
        //spaces
        for(int space = 0; space < n-row-1; space++) {
            cout << "  ";
        }

        //left half numbers
        for(int num = 0; num < row+1; num++) {
            cout << num+1 << " ";
        }

        //right half numbers
        for(int num = 0; num < row; num++) {
            cout << row-num << " ";
        }

        cout << endl;
    }*/








    //Numeric hollow inverted half pyramid- 2
    /*int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    for(int row = 0; row < n; row++) {
        for(int col = row+1; col <= n; col++) {
            if(row == 0 || col == row+1 || col == n) {
                cout << col << " ";
            }
            else {
                cout << "  ";
            }
        }

        cout << endl;
    }*/








    //Numeric hollow inverted half pyramid
    /*int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n-row; col++) {
            if(row == 0 || col == 0 || col == n-row-1) {
                cout << col+1 << " ";
            }
            else {
                cout << "  ";
            }
        }

        cout << endl;
    }*/






    //Numeric hollow half pyramid
    /*int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < row+1; col++) {
            if(row == n-1 || col == 0 || col == row) {
                cout << col+1 << " ";
            }
            else {
                cout << "  ";
            }
        }

        cout << endl;
    }*/

    return 0;
}