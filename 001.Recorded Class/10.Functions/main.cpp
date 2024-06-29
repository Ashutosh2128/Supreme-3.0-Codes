#include <iostream>
using namespace std;

int getMultiplication(int x, int y, int z) {
    int res = x*y*z;
    return res;
}

void printNameTentimes() {
    for(int i = 1; i <= 10; i++) {
        cout << "Ashutosh" << "  ";
    } cout << endl;
}

void printMultiples(int num) {
    for(int i = 1; i <= 10; i++) {
        cout << num*i << "  ";
    } cout << endl;
}

int convertIntoCelcius(int far) {
    int celcius = (far-32)*5/9;
    return celcius;
}

char convertIntoUpparCase(char ch) {
    char ans = ch - 'a' + 'A';

    return ans;
}

int main() {

    int multiplication = getMultiplication(5, 4, 3);
    cout << multiplication << endl;

    printNameTentimes();

    printMultiples(5);

    int far = 32;
    int cel = convertIntoCelcius(far);
    cout << cel << endl;

    char uppar = convertIntoUpparCase('k');
    cout << uppar << endl;

    return 0;
}


/*int sum(int a, int b) {
    int totalSum = a + b;

    return totalSum;
}

void printMyName() {
    cout << "Ashutosh" << endl;
}

int main() {
    // int ans = sum(5, 10);
    // cout << ans << endl;

    printMyName();

    return 0;
}*/