#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main() {
    //creation
    //set<int> st; //ordered set
    unordered_set<int> st2;

    //Insertion
    st2.insert(10);
    st2.insert(15);
    st2.insert(8);
    st2.insert(4);

    if(st2.find(15) != st2.end()) {
        cout << "Found" << endl;
    }
    else {
        cout << "Not found" << endl;
    }

    if(st2.count(15) == 0) {
        cout << "Not found" << endl;
    }
    if(st2.count(15) == 1) {
        cout << "Found" << endl;
    }



    // st2.erase(st2.begin(), st2.end());
    // cout << st2.size() << endl;

    // cout << st2.size() << endl;
    // st2.clear();
    // cout << st2.size() << endl;

    // if(st2.empty()) {
    //     cout << "Set is empty" << endl;
    // }
    // else {
    //     cout << "Set is not empty" << endl;
    // }

    //traverse
    // unordered_set<int> :: iterator it = st2.begin();

    // while(it != st2.end()) {
    //     cout << *it << " ";
    //     it++;
    // }

    //Insertion
    // st.insert(10);
    // st.insert(15);
    // st.insert(8);
    // st.insert(4);

    // //traverse
    // set<int> :: iterator it = st.begin();

    // while(it != st.end()) {
    //     cout << *it << " ";
    //     it++;
    // }



    return 0;
}