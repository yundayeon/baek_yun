#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    } sort(arr,arr+n,greater<int>());
    cout<<arr[k-1];

}
