//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin>>arr[i];
        if ( arr[i] < 40 ) {
            sum += 40;
        }else sum += arr[i];
    } cout<<sum/5;
}