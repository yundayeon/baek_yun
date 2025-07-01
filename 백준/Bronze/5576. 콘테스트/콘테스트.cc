#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int arr[10], arr1[10];
    int sum = 0,sum1 = 0;
    for (int i = 0; i < 10; i++) {
        cin>>arr[i];
    }sort(arr,arr+10);
    sum += arr[7]+arr[8]+arr[9];
    for (int x = 0; x < 10; x++) {
        cin>>arr1[x];
    }sort(arr1,arr1+10);
    sum1 += arr1[7]+arr1[8]+arr1[9];
    cout<<sum<<' '<<sum1;
}

