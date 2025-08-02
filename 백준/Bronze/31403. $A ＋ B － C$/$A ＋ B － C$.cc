//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a+b-c<<'\n';
    string A,B,C;
    A = to_string(a);
    B = to_string(b);
    string s = A + B;
    int sum = stoi(s);
    cout<<sum - c;
}