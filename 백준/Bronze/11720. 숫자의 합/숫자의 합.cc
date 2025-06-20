#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for (int i =0; i < n; i++) {
        ans += s[i]-'0';
    }cout<<ans;
 }