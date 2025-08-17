//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<int>v(26,-1);
    string s;
    cin>>s;
    string a = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < s.length(); i++) {
        for (int x = 0; x < a.length(); x++) {
            if (s[i] == a[x] && v[x] == -1) {
                v[x] += i+1;


            }
        }
    }for (int i : v) cout<<i<<' ';
}