#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    int arr[n];
    for (int x = 0; x < n; x++) {
        arr[x] = x+1;
    }
    for (int i = 0; i < m; i++) {
        int a,b;
        cin>>a>>b;
        swap(arr[a-1],arr[b-1]);
    }for (int y : arr) cout<<y<<' ';

}
