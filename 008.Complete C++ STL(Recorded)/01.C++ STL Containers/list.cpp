#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> first;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    //10 -> 20 -> 30

    first.insert(first.begin(), 100);
    //100 -> 10 -> 20 -> 30

    cout << first.size() << endl;
    first.erase(first.begin(), first.end());
    cout << first.size() << endl;

    // list<int>::iterator it = first.begin();

    // while(it != first.end()) {
    //     cout << *it << " ";
    //     it++;
    // } cout << endl;





    // list<int> second;

    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // //100 -> 200 -> 300

    // cout << "Printing first before swap" << endl;
    // list<int>::iterator it1 = first.begin();

    // while(it1 != first.end()) {
    //     cout << *it1 << " ";
    //     it1++;
    // } cout << endl;

    // cout << "Printing second before swap" << endl;
    // list<int>::iterator it2 = second.begin();

    // while(it2 != second.end()) {
    //     cout << *it2 << " ";
    //     it2++;
    // } cout << endl;

    // first.swap(second);

    // cout << "Printing first after swap" << endl;
    // list<int>::iterator it3 = first.begin();

    // while(it3 != first.end()) {
    //     cout << *it3 << " ";
    //     it3++;
    // } cout << endl;

    // cout << "Printing second after sawp" << endl;
    // list<int>::iterator it4 = second.begin();

    // while(it4 != second.end()) {
    //     cout << *it4 << " ";
    //     it4++;
    // } cout << endl;







    //creation
    // list<int> myList;

    // //insertion
    // myList.push_back(10);
    // //10
    // myList.push_back(20);
    // //10 -> 20
    // myList.push_back(30);
    // //10 -> 20 -> 30
    // myList.push_back(40);
    // //10 -> 20 -> 30 -> 40

    // myList.push_front(100);
    // //100 -> 10 -> 20 -> 30 -> 40

    // myList.pop_back();
    // //100 -> 10 -> 20 -> 30

    // myList.pop_front();
    // //10 -> 20 -> 30

    // myList.push_back(10);
    // //10 -> 20 -> 30 -> 10

    // cout << "Before removing" << endl;
    // list<int>::iterator it = myList.begin();

    // while(it != myList.end()) {
    //     cout << *it << " ";
    //     it++;
    // } cout << endl;

    // myList.remove(10);

    // cout << "After removing" << endl;
    // list<int>::iterator it2 = myList.begin();

    // while(it2 != myList.end()) {
    //     cout << *it2 << " ";
    //     it2++;
    // } cout << endl;


    // cout << myList.front() << endl; //10
    // cout << myList.back() << endl; //30

    // cout << myList.size() << endl;
    // myList.clear();
    // cout << myList.size() << endl;

    // if(myList.empty()) {
    //     cout << "List is empty" << endl;
    // }
    // else {
    //     cout << "List is not empty" << endl;
    // }




    return 0;
}