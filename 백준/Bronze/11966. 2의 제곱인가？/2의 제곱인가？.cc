//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
#include <stack>
#include <iomanip>
using namespace std;


int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a;
    cin>>a;

    for (int i = 0; i < 31; i++) {
        if (a == (1<<i)) {
            cout<<"1";
            return 0;
        }
    }cout<<"0";
}