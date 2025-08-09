//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    int n,a;
    for (int i = 0; i < t; i++) {
        int sum = 0;
        cin>>n;
        for (int x = 0; x < n; x++) {
            cin>>a;
            sum += a;
        }
        cout<<sum<<'\n';
    }
}