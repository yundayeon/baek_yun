#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n,m;
    cin>>n;
    long arr[10001] = {0};
    for (long i = 0; i < n; i++) {
        cin>>m;
        arr[m]++;
    }
    for (int i = 1; i < 10001; i++)
        for (int x = 0;  x < arr[i]; x++) {
            cout<<i<<'\n';
        }
}