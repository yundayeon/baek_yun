#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    for (int i = 0; i < m; i++) {
        int sum = 0;
        int a,b;
        cin>>a>>b;
        for (int j = a-1; j < b; j++) {
            sum += arr[j];
        }cout<<sum<<'\n';
    }
}