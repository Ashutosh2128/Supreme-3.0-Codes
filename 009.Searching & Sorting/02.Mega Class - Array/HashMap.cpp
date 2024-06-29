#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int , int> desk_map; //creation

    //initialisation
    desk_map[1] = 53;
    desk_map[2] = 54;
    desk_map[3] = 55;

    desk_map[2] = 57; //Reassigning, because 2 is already there


    //iterate 
    unordered_map<int, int> :: iterator it; //have to creat a variable

    cout << "Printing unordered map by creating a variable" << endl;
    for(it = desk_map.begin(); it != desk_map.end(); it++) {
        int key = it -> first;
        int value = it -> second;
        cout << "Key: " << key << ", Value: " << value << endl;
    }

    cout << endl;

    //another syntax for iterator
    cout << "Printing through for-each loop" << endl;
    for(auto it: desk_map) {
        int key = it.first;
        int value = it.second;
        cout << "Key: " << key << ", Value: " << value << endl;
    }

    cout << endl;

    //find value in map
    cout << "Finding value of key 2 and that is: " << endl;
    if(desk_map.find(2) != desk_map.end()) {
        int value = desk_map[2];
        cout << value << endl;
    }
    else {
        cout << "Key not found" << endl;
    }

    cout << endl;

    //deletion
    cout << "Deleting key 2" << endl;
    desk_map.erase(2);
    cout << endl;

    //printing after erase
    //unordered_map<int, int> :: iterator it;
    cout << "Printing after erasing key 2" << endl;
    for(it = desk_map.begin(); it != desk_map.end(); it++) {
        int key = it -> first;
        int value = it -> second;
        cout << "Key: " << key << ", Value: " << value << endl;
    }

    cout << endl;

    //finding after erase
    cout << "finding after erasing key 2" << endl;
    if(desk_map.find(2) != desk_map.end()) {
        int value = desk_map[2];
        cout << value << endl;
    }
    else {
        cout << "Key not found" << endl;
    }

    return 0;
}