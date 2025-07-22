//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin>>n;
    vector <pair <long,long>>v;
    for (long i = 0; i < n; i++) {
        long a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end(),[](auto &a, auto &b) {
        if (a.second != b.second) return a.second < b.second;
        else return a.first < b.first;
    });
    for (int i = 0; i < n; i++) {
        cout<<v[i].first<<' '<<v[i].second<<'\n';
    }
}