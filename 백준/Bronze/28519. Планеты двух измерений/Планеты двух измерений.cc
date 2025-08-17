//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long a,b;
    cin>>a>>b;
    if (a == b) {
        cout<<a+b;
    }else if ( a > b ) {
        cout<<b*2+1;
    }else cout<<a*2+1;
}