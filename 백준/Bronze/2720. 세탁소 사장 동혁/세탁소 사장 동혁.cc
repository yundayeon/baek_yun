//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++) {
        int s;
        cin>>s;
        vector<int>arr(4,0);
        while (s != 0) {
            arr[0] += s/25;
            s=s%25;
            arr[1] += s/10;
            s=s%10;
            arr[2] += s/5;
            s=s%5;
            arr[3] += s;
            s=0;
        }
        for (int x : arr) {
            cout<<x<<' ';
        }cout<<'\n';
    }
}