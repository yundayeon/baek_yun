//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;

    for (int x = 0; x < t; x++) {
        int y_score = 0, k_score = 0;
        for (int i = 0; i < 9; i++) {
            int y,k;
            cin>>y>>k;
            y_score += y;
            k_score += k;
        }if (y_score > k_score) cout<<"Yonsei"<<'\n';
        else if ( k_score > y_score) cout<<"Korea"<<'\n';
        else cout<<"Draw"<<'\n';
    }
}