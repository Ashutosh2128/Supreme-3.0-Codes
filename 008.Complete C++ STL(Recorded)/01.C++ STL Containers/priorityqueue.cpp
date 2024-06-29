#include <iostream>
#include <queue>
using namespace std;

int main() {
    //min-heap -> minimum value will be highest priority
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(100); //100
    pq.push(50); //50, 100
    pq.push(75);//50, 75, 100
    
    cout << pq.top() << endl; //50
    pq.pop(); //50 will pop
    cout << pq.top() << endl; //75
    pq.pop(); //75 will pop



    //creation
    // priority_queue<int> pq;
    // //max-heap -> maximum value -> Highest Priority

    // pq.push(10); //10
    // pq.push(25); //25, 10
    // pq.push(55); //55, 25, 10
    // pq.push(21); //55, 25, 21, 10

    // //top element -> highest priority element
    // cout << pq.top() << endl; //55
    // pq.pop(); //highest priority element will pop i.e 55 (25, 21, 10)
    // cout << pq.top() << endl; //25
    // pq.pop(); //25 will pop
    // cout << pq.top() << endl; //21

    // cout << pq.size() << endl;

    // if(pq.empty() == true) {
    //     cout << "pq is empty" << endl;
    // }
    // else {
    //     cout << "pq is not empty" << endl;
    // }


    return 0;
}