#include<iostream>
#include<vector>
using namespace std;

void findSubsequences(string str, int n, int i, string output, vector<string>& ans) {
    if(i >= n) {
        ans.push_back(output);
        return;
    }

    //include call
    findSubsequences(str, n, i+1, output+str[i], ans);

    //exclude call
    findSubsequences(str, n, i+1, output, ans);
}

int main() {
    string str = "abc";
    string output = "";
    vector<string> ans;
    int index = 0;

    findSubsequences(str, str.length(), index, output, ans);

    cout << "Size of ans is now: " << ans.size() << endl;

    //printing ans
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }



    return 0;
}









/*#include<iostream>
using namespace std;

void findSubsequences(string str, int n, int i, string output) {
    if(i >= n) {
        cout << output << endl;
        return;
    }

    //include
    findSubsequences(str, n, i+1, output + str[i]);

    //exclude
    findSubsequences(str, n, i+1, output);
}

int main() {
    string str = "abc";
    string output = "";
    int index = 0;

    findSubsequences(str, str.length(), index, output);


    return 0;
}*/