//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,a;
    cin>>n;
    while (true) {
        cin>>a;
        if (a == 0) break;
        if ( a % n == 0) {
            cout<<a<<" is a multiple of "<<n<<"."<<'\n';
        }else cout<<a<<" is NOT a multiple of "<<n<<"."<<'\n';
    }

}