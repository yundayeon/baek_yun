//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
#include <stack>
#include <iomanip>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string mingyu = "SciComLove";
    string s;
    cin>>s;
    int cnt = 0;
    for (int i = 0; i < mingyu.size(); i++) {
        if (mingyu[i] != s[i]) {
            cnt++;
        }
    }
    cout<<cnt;
}