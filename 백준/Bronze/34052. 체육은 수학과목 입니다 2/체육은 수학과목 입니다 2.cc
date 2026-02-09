#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int arr[4];
    int sum = 300;
    for (int i = 0; i < 4; i++) {
        cin>>arr[i];
        sum += arr[i];
    }if (sum <= 1800) {
        cout<<"Yes";
    }else cout<<"No";
}