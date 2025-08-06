//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a;
    vector<int>arr;
    for (int i = 1; i <= 5; i++) {
        cin>>a;
        if (a.find("FBI") != string::npos) {
            arr.push_back(i);
        }
    }if (arr.size() == 0) {
            cout<<"HE GOT AWAY!";

        }else {
            for (int x : arr) cout<<x<<" ";
        }
}