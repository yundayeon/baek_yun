#include <iostream>
#include <algorithm>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

long long max(long long a, long long b) {
    if (a > b) {
         return a;
    }else return b;

}

int main() {
    cin.tie(0) ->sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    if (m == 0) {
        cout<<0;
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    long long sum = 0;
    for (int i = 0; i < m; i++) {
        sum += arr[i];
    }

    long long MAX = sum;

    for (int i = m; i < n; i++) {
        sum = sum - arr[i-m] + arr[i];
        MAX = max(MAX,sum);
    } cout<<MAX;
}