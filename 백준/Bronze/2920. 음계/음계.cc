#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int arr[8];
    int arr1[8],arr2[8];
    for (int i = 0; i < 8; i++) {
        cin>>arr[i];
        arr1[i] = arr[i];
        arr2[i] = arr[i];
    }
    sort(arr1,arr1+8);
    sort(arr2,arr2+8,greater<int>());
    
    if (equal(arr,arr+8,arr1)) {
        cout<<"ascending";
    } else if (equal(arr,arr+8,arr2)) {
        cout<<"descending";
    } else {
        cout<<"mixed";
    }
}