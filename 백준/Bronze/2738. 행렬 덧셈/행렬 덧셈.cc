//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int x = 0; x < m; x++) {
            cin>>a[i][x];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int x = 0; x < m; x++) {
            int num;
            cin>>num;
            a[i][x] += num;
        }
    }for (int i = 0; i < n; i++) {
        for (int x = 0; x < m; x++) {
            cout<<a[i][x]<<" ";
        }cout<<'\n';
    }
}