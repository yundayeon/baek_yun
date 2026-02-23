#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n,k;
    cin>>n>>k;
    vector<int>arr;
    int a;
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin>>a;
        arr.push_back(a);
    } for (int j = 1; j < n+1; j++) {
        total += k / arr[n-j];
        k -= (k / arr[n-j]) * arr[n-j];
    } cout<<total;
}
