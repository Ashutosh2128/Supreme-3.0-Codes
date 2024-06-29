#include <iostream>
using namespace std;






//Calculate percentage
float calculatePercentage(int sb1, int sb2, int sb3, int sb4, int sb5) {
    int sum = sb1 + sb2 + sb3 + sb4 + sb5;
    int totalMark = 500;

    float percentage = (sum * 100.0) / totalMark;

    return percentage;
}








//print even number in between some range
/*void printEvenInside(int start, int end) {
    for(int i = start; i <= end; i++) {
        int n = i;
        if(!(n & 1)) {
            cout << n << " ";
        }
    }
}*/







//check prime or not
/*bool isPrime(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            //Not prime
            return false;
        }
    }

    //agar yahan tak aya to kisi se v divide nehi hua
    // yani prime he
    return true;
}*/






/*float calculateTotalSum(int a, int l, int n) {
    float ans = ((n) * (a+l)) / 2.0;

    return ans;
}*/






//Calculate power
/*int calculatePower(int a, int b) {
    int ans = 1;

    for(int i = 0; i < b; i++) {
        ans = ans*a;
    }

    return ans;
}*/





//eligible for vote or not
/*bool checkAge(int age) {
    if(age > 18) {
        return true;
    }
    else {
        return false;
    }
}*/






//print 2 ka table
/*void print2KaTable(int n) {
    for(int i = 1; i <= 10; i++) {
        cout << n*i << endl;
    }
}*/







/*void sayMyName() {
    cout << "Ashutosh" << endl;
}*/

int main() {







    //Calculate Percantage
    int sb1, sb2, sb3, sb4, sb5;
    cin >> sb1 >> sb2 >> sb3 >> sb4 >> sb5;

    float percentage = calculatePercentage(sb1, sb2, sb3, sb4, sb5);

    cout << "Percentage = " << percentage << endl;








    //print even number in between some range
    /*int start, end;
    cin >> start >> end;

    printEvenInside(start, end);*/








    //chack prime or not
    /*int n;
    cin >> n;

    bool ans = isPrime(n);

    if(ans == true) {
        cout << "Prime" << endl;
    }
    else {
        cout << "Not prime" << endl;
    }*/







    //Calculate sum of AP
    //cout << calculateTotalSum(1, 5, 3) << endl;






    //Calculate power
    /*int a, b;
    cin >> a >> b;

    cout << "Power of " << a << " to the power " << b << " = " << calculatePower(a, b) << endl;*/






    //eligible for voting or not
    /*int age;
    cin >> age;

    if(checkAge(age)) {
        cout << "Can vote" << endl;
    }
    else {
        cout << "Can not vote" << endl;
    }*/








    //print 2 ka table
    // int n;
    // cin >> n;
    // print2KaTable(n);








    //Say My Name Function
    //sayMyName();








    /*
    //Number of set bit
    int num;
    cin >> num;
    int n = num;

    int setBits = 0;

    while(n > 0) {  
        int lastBit = (n & 1);

        if(lastBit == 1) {
            setBits += 1;
        }

        n = n >> 1;
    }

    cout << "Number of set bits in " << num << " = " << setBits << endl;*/







    
    //Check Even or Odd
    /*int n = 10;

    if((n & 1) == 0) {
        cout << "Even Number" << endl;
    }
    else {
        cout << "Odd Number" << endl;
    }*/





    //Bitwise Operator
    // cout << (5 & 3) << endl;
    // cout << (5 | 3) << endl;
    // cout << ~(5) << endl;
    // cout << (5 ^ 5 ^ 9) << endl;
    // cout << (25 << 1) << endl;
    // cout << (25 << 2) << endl;
    // cout << ((-10) << 1) << endl;
    // cout << ((-1000) << 1) << endl;
    // cout << ((-1000) >> 1) << endl;
    // cout << ((-10) >> 1) << endl;

    return 0;
}