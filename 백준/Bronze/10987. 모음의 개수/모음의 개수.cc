//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a = "aeiou";
    string b;
    cin>>b;
    int count = 0;
    for (int i = 0; i < b.size(); i++) {
        for ( int x = 0; x < 5; x++) {
            if (b[i] == a[x]) {
                count++;
            }
        }
    }cout<<count;
}