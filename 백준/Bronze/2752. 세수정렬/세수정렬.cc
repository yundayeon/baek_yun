#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a[3];
    for (int i = 0; i < 3; i++) {
        cin>>a[i];
    }sort(a,a+3,less<int>());
    for (int x : a) cout<<x<<' ';
}