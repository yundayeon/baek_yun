//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    int arr[5];
    for (int x = 0; x < t; x++) {
        for (int i = 0; i < 5; i++) {
            cin>>arr[i];
        }sort(arr,arr+5);
        if (arr[3] - arr[1] >= 4) {
            cout<<"KIN"<<'\n';
        }else cout<<arr[1]+arr[2]+arr[3]<<'\n';
    }
}