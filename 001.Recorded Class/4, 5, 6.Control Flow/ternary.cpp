#include<iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    (age > 18) ? cout << "Can vote" : cout << "Can not vote";

    return 0;
}