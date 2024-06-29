//Here we are going to use cin.fail(), cin.ignore(), & getline() functions

#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    string name;

    cout << "Enter the number: " << endl;
    cin >> num;

    if(cin.fail()) {
        cout << "Invalid input! Please enter a valid number" << endl;
    }

    cin.ignore();

    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Number is " << num << endl << "Your name is " << name << endl;

    return 0;
}