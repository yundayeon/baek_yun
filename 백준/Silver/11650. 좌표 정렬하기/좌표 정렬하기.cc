//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;
//5032


int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;

    vector<pair<int,int>>arr;
    for (int i = 0; i < n; i++) {
        int x,y;
        cin>>x>>y;
        arr.push_back({x,y});
    }
    sort(arr.begin(),arr.end());
    for (int i = 0;  i < n; i++) {
        cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    }
}