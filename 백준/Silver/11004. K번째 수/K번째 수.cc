//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a,b;
    cin>>a>>b;
    int arr[a];
    for (int i = 0; i < a; i++) {
        cin>>arr[i];
    }sort(arr,arr+a);
    cout<<arr[b-1];
}