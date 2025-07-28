//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a,b;
    cin>>a>>b;
    int sum[a+b];
    int arr1[a],arr2[b];
    for (int i = 0; i < a; i ++) cin>>arr1[i];
    for (int x = 0; x < b; x++) cin>>arr2[x];
    for (int c = 0; c < a + b; c++) {
        if (c < a) sum[c] = arr1[c];
        else sum[c] = arr2[c-a];
    }sort(sum,sum+a+b);
    for (int d : sum) cout<<d<<' ';
}
