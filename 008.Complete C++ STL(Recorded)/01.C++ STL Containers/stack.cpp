#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> first;
    stack<int> second;

    first.push(10);
    first.push(20);

    second.push(100);
    second.push(200);

    cout << "Bafore swapping Top element of first: " << first.top() << endl;
    cout << "Bafore swapping Top element of second: " << second.top() << endl;

    first.swap(second);

    cout << "After swapping top element of first: " << first.top() << endl;
    cout << "After swapping top element of second: " << second.top() << endl;





    //creation
    // stack<int> st;

    // //insertion
    // st.push(10);
    // //10
    // st.push(20);
    // //20, 10
    // st.push(30);
    // //30, 20, 10
    
    // cout << st.size() << endl;

    // st.pop();
    // //20, 10
    // cout << st.size() << endl;
    // cout << st.top() << endl;
    // st.pop();
    // //10
    // cout << st.top() << endl;
    // cout << st.size() << endl;

    // if(st.empty() == 1) {
    //     cout << "Stack is emoty" << endl;
    // }
    // else {
    //     cout << "Stack is not empty" << endl;
    // }

    return 0;
}