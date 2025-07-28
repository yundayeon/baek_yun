//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    int arr[10];
    for (int x = 0; x < t; x++) {
        for (int i = 0; i < 10; i++) {
            cin>>arr[i];
        }sort(arr,arr+10);
        cout<<arr[7]<<'\n';
    }

}