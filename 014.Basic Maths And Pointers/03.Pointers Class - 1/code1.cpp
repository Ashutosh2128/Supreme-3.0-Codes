#include<iostream>
using namespace std;

int main() {
     char ch[20] = "RacecaR";
    char* cptr = &ch[0];

    cout << "ch: " << ch << endl;
    cout << "&ch: " << &ch << endl;
    cout << "*(ch+3): " << *(ch+3) << endl;
    cout << "cptr: " << cptr << endl;
    cout << "*cptr: " << *cptr << endl;
    cout << "*(cptr+3): " << *(cptr+3) << endl;
    cout << "cptr+2: " << cptr+2 << endl;
    cout << "cptr+4: " << cptr+4 << endl;










    // char ch[20] = "Babbar";
    // char* cptr = ch;

    // cout << "ch: " << ch << endl;
    // cout << "&ch: " << &ch << endl;
    // cout << "ch[0]: " << ch[0] << endl;
    // cout << "&cptr: " << &cptr << endl;
    // cout << "*cptr: " << *cptr << endl;
    // cout << "*(cptr+3): " << *(cptr+3) << endl;
    // cout << "cptr: " << cptr << endl;










    // int arr[] = {10, 20, 30, 40};
    // int* ptr = arr;
    // cout << "hello" << endl;
    // //arr = arr+1; //error







    // int a = 10;
    // int *p = &a;
    // int *q = p;

    // cout << "a: " << a << endl;
    // cout << "&a: " << &a << endl;
    // //cout << "*a: " << *a << endl;
    // cout << "p: " << p << endl;
    // cout << "a: " << a << endl;
    // cout << "a: " << a << endl;
    // cout << "a: " << a << endl;
    // cout << "a: " << a << endl;
    // cout << "a: " << a << endl;
    // cout << "a: " << a << endl;
    // cout << "a: " << a << endl;













    // int* ptr; //bad practice
    // cout << *ptr;






    // int a = 5;
    // int *ptr = &a;

    // char ch = 'a';
    // char * cptr = &ch;

    // cout << sizeof(cptr) << endl;

    // long l = 1045;
    // long * lptr = &l;

    // cout << sizeof(lptr) << endl;









    // int a = 5;
    // cout << a;

    // int b = a;
    // int c = &a;



    return 0;
}