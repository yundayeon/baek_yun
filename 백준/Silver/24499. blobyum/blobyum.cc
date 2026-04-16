#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,k;
    cin>>n>>k;
    int arr[n];
    int sum[n];
    sum[0] = 0;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }for (int i = 0; i < k; i++) {
        sum[0] += arr[i];
    }
    for (int i = 1; i < n+k; i++) {
        sum[i%n] = sum[(i-1)%n] - arr[(i-1)%n] + arr[(i+k-1)%n];
    }sort(sum,sum+n, greater<int>());
    cout<<sum[0];
}