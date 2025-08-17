//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a,b,c;
    int num = 0;
    string f = "0123456789";
    vector<int>arr(10,0);
    cin>>a>>b>>c;
    num = a*b*c;
    string s = to_string(num);
    for (int i = 0; i < s.size(); i++) {
        for (int x = 0; x < 10; x++) {
            if (s[i] == f[x]) {
                arr[x] += 1;
            }
        }
    }for (int x : arr) cout<<x<<'\n';

    return 0;
}