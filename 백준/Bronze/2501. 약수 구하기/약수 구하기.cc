//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,k;
    cin>>n>>k;
    vector<int>div;
    for (int i = 1; i < n+1; i++) {
        if (n % i == 0) {
            div.push_back(i);
        }
    }if (k <= div.size()) {
        cout<<div[k-1];
    }else cout<< 0;
}