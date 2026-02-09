#include <iostream>
#include <algorithm>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.tie(0) ->sync_with_stdio(0);
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i =0; i<n; i++) {
        cin>>arr[i];
    }
    int sum = 0;
    for (int i =0; i < k; i++) {
        sum += arr[i];
    }

    int Max = sum;

    for (int i = k; i < n; i++) {
        sum = sum - arr[i-k] + arr[i];
        Max = max(Max,sum);
    } cout<<Max;

}