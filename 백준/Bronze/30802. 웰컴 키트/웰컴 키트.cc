//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    vector<int>v(6,0);
    for (int i = 0; i < 6; i++) {
        int size;
        cin>>size;
        v[i] += size;
    }
    int t,p;
    cin>>t>>p;
    int cnt = 0;

    for (int i = 0; i < 6; i++) {
        if (v[i] == 0) {
            cnt += 0;
        }else if (v[i] / t == 0 || (v[i] / t == 1 && v[i] % t == 0)) {
            cnt += 1;
        }else if (v[i] / t >= 2 && v[i] % t == 0) {
            cnt += v[i] / t;
        }
        else if (v[i] / t >= 1 && v[i] % t >= 1 ) {
            cnt += (v[i] / t) + 1;
        }
    }cout<<cnt<<'\n';
    cout<<n/p<<" "<<n%p;
}