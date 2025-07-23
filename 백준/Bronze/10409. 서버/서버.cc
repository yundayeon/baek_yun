//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,t;
    cin>>n>>t;
    int arr[n];
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        if (sum + arr[i] <= t) {
            sum += arr[i];
            count++;
        }else break;
    }cout<<count;
}