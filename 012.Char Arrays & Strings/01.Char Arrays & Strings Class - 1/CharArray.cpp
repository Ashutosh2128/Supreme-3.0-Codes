#include <iostream>
using namespace std;

int getLength(char arr[], int n) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == '\0') {
            break;
        }
        else {
            count++;
        }
    }

    return count;
}

void replaceCharacter(char arr[], char newChar, char oldChar, int n) {
    int len = getLength(arr, n);

    for(int i = 0; i < len; i++) {
        if(arr[i] == oldChar) {
            arr[i] = newChar;
        }
    }
}

void upparCaseToLowerCase(char arr[], int n) {
    int len = getLength(arr, n);

    for(int i = 0; i < len; i++) {
        char ch = arr[i];
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        }

        arr[i] = ch;
    }
}

void lowerCaseToUpparCase(char arr[], int n) {
    int len = getLength(arr, n);

    for(int i = 0; i < len; i++) {
        char ch = arr[i];

        if(ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A';
        }

        arr[i] = ch;
    }
}

void reverseCharArray(char arr[], int n) {
    int len = getLength(arr, n);
    int i = 0; 
    int j = len - 1;

    while(i <= j) {
        swap(arr[i++], arr[j--]);
    }
}

bool checkPalindrome(char arr[], int n) {
    int len = getLength(arr, n);

    int i = 0;
    int j = len-1;

    while(i <= j) {
        if(arr[i] == arr[j]) {
            i++;
            j--;
        } else {
            return false;
        }
    }

    return true;
}

int main() {
    char arr[100];
    int n = 100;

    cout << "Enter text: " << endl;
    cin >> arr;

    bool ans = checkPalindrome(arr, n);

    if(ans) {
        cout << "Entered array is a Palindrome" << endl;
    }
    else {
        cout << "Entered array is Not a Palindrome" << endl;
    }



    // cout << "Printing array before reversing: " << endl;
    // cout << arr << endl;

    // reverseCharArray(arr, n);

    // cout << "Printing array after reversing: " << endl;
    // cout << arr << endl;



    //lowerCaseToUpparCase(arr, size);
    // upparCaseToLowerCase(arr, size);
    //replaceCharacter(arr, ' ', '@', size);

    //cout << arr << endl;

    //int length = getLength(arr, size);
    //cout << "Length of the array is: " << length << endl;






    // cout << "Enter your name: " << endl;
    // cin.getline(arr, 100, '\t'); //setting delimeter in 3rd parameter for stop taking input
    // //cin.getline(arr, 100); //for taking input with spaces

    // cout << arr << endl;

    // cout << "Enter your Name" << endl;
    // cin >> arr;

    // //cout << arr << endl;
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;

    // //for proving in the last(5) there is a null character code in below(will print ASCII value)
    // cout << int(arr[0]) << endl;
    // cout << int(arr[1]) << endl;
    // cout << int(arr[2]) << endl;
    // cout << int(arr[3]) << endl;
    // cout << int(arr[4]) << endl; //null value 0
    // cout << int(arr[5]) << endl;

    return 0;
}