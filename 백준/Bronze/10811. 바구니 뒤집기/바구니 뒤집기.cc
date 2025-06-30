#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    int i,j;
    cin>>n>>m;
    int arr[n];
    for (int f = 0; f < n; f++) {
        arr[f] = f+1;
    }
    for (int d = 0; d < m; d++) {
        cin>>i>>j;
        reverse(arr + i-1,arr + j);
    } for (int x: arr) cout<<x<<' ';
}