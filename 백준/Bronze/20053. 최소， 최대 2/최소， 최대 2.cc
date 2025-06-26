#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t,n;
    cin>>t;
    for (int x = 0; x < t; x++) {
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }cout<<*min_element(arr,arr+n)<<' '<<*max_element(arr,arr+n)<<'\n';
    }
}