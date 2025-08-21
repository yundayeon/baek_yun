//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;

    for (int i = 1; i < n; i++) {
        int sum = i;
        int x = i;
        while (x != 0) {
            sum += x % 10;
            x /= 10;
        } if (sum == n) {
            cout<<i;
            return 0;
        }
    }cout<<0;
}