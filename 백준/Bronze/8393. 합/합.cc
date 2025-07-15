#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    int sum = 0;
    for (int i = 1; i < n+1; i++) {
        sum += i;
    }cout<<sum;
}