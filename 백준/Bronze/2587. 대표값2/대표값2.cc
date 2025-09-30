#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin>>arr[i];
        sum += arr[i];
    }sort(arr,arr+5);
    cout<<sum/5<<'\n'<<arr[2];
    }
