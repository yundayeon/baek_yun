//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a;

    while (cin>>a) {
        if ( a == -1) return 0;
        if ( a == 1 ) continue;
        vector<int>arr;
        int sum = 0;
        for (int i = 1; i < a; i++ ) {
            if (a % i == 0 ) {
                arr.push_back(i);
                sum += i;
            }
        }if (sum == a) {
            cout<<a<<" = ";
            for (int i = 0; i < arr.size(); i++) {
                cout<<arr[i];
                if ( i != arr.size()-1) {
                    cout<<" + ";
                }
            }cout<<'\n';

        }else cout<<a<<" is NOT perfect."<<'\n';
    }
}