#include <iostream>
#include <queue> //#include <deque>
using namespace std;

int main() {
    //creation
    deque<int> dq;

    //Insertion
    dq.push_back(10); //10
    dq.push_back(20); //10, 20
    dq.push_back(30); //10, 20, 30
    dq.push_front(100); //100, 10, 20, 30
    dq.push_front(200); //200, 100, 10, 20, 30
    dq.push_front(300); //300, 200, 100, 10, 20, 30

    // cout << dq.size() << endl;

    // cout << dq.front() << endl;
    // cout << dq.back() << endl;

    dq.pop_front(); //200, 100, 10, 20, 30
    dq.pop_back(); // 200, 100, 10, 20

    cout << dq.size() << endl;
    dq.erase(dq.begin(), dq.end());
    cout << dq.size() << endl;




    // cout << dq.size() << endl;
    // dq.clear();
    // cout << dq.size() << endl;

    // dq.insert(dq.begin(), 101);
    // cout << dq[0] << endl; //101



    // cout << dq[0] << endl;
    // cout << dq[1] << endl;
    // cout << dq.at(2) << endl;
    // cout << dq.at(3) << endl;




    // deque<int> :: iterator it = dq.begin();

    // while(it != dq.end()) {
    //     cout << *it << " ";
    //     it++;
    // }
    // cout << endl;



    // cout << dq.size() << endl;

    // cout << dq.front() << endl;
    // cout << dq.back() << endl;

    // if(dq.empty() == true) {
    //     cout << "Deque is empty" << endl;
    // }
    // else {
    //     cout << "Deque is not empty" << endl;
    // }

    return 0;
}