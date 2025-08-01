//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a;
    vector<int>arr;
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        cin>>a;
        if (a % 2 != 0 ) {
            sum += a;
            arr.push_back(a);
        }
    }sort(arr.begin(),arr.end());
    if (sum == 0) {
        cout<<"-1";
    }else cout<<sum<<'\n'<<arr[0];
}