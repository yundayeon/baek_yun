//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a,b,v;
    cin>>a>>b>>v;
    cout<<(v-b-1)/(a-b)+1;
}