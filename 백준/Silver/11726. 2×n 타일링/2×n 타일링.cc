#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0) ->sync_with_stdio(0);
    int n;
    cin>>n;
    int dp[1001];
    dp[1]=1;
    dp[2]=2;
    for (int i = 3; i < n+1; i++) {
        dp[i] = (dp[i-2]+dp[i-1])%10007;
    }cout<<dp[n];
}