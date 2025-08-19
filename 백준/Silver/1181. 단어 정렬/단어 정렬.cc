//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;
bool comp(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return s1.length() < s2.length();
    }return s1 < s2;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    vector<string>v;
    for (int i = 0; i < n; i++) {
        string s;
        cin>>s;
        v.push_back(s);
    }sort(v.begin(),v.end(),comp);
    v.erase(unique(v.begin(),v.end()),v.end());
    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i]<<'\n';
    }

}