#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    fill_n(arr,n+1,0);
    int i,j,k;
    for (int x = 0; x < m; x++) {
        cin>>i>>j>>k;
        for (int y = i; y <= j; y++) {
            arr[y] = k;
        }
    }for (int x = 1; x <= n; x++) {
        if (arr[x] != 0) {
            cout<<arr[x]<<' ';
        }else cout<<0<<' ';
    }
}