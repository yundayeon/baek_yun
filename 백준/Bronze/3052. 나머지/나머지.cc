//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<int>v(42,0);
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        int a,b;
        cin>>a;
        b = a%42;
        for (int x = 0; x < 42; x++) {
            if (b == x) {
                v[x] += 1;
            }
        }
    }for (int x = 0; x < v.size(); x++) {
        if (v[x] != 0) {
            sum++;
        }
    }cout<<sum;
    return 0;
}