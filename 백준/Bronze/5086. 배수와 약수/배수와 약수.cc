//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a,b;
    int x = 0;
    while (cin>>a>>b) {
        if (a == b && a == 0) break;
        if (b % a == 0) cout<<"factor"<<'\n';
        else if (a % b == 0) cout<<"multiple"<<'\n';
        else cout<<"neither"<<'\n';
    }
}