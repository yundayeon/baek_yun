//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int m,n;
    cin>>m>>n;
    vector<int>arr(n+1,1);
    arr[0] = 0;
    arr[1] = 0;
    for (int i = 2; i*i <= n; i++){
        if (arr[i] == 1) {
            for (int j = i*i; j <= n; j += i){
                arr[j] = 0;
            }
        }
    }for (int i = m; i <= n; i++) {
        if (arr[i] == 1) {
            cout<<i<<'\n';
        }
    }
}