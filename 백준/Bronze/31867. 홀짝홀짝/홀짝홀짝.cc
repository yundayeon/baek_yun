#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt1=0, cnt2 =0;
    for (int i = 0; i < n; i++) {
        int a = s[i]-'0';
        if (a%2==0) cnt1++;
        else cnt2++;
    }
    if (cnt1<cnt2) cout<<1;
    else if (cnt1>cnt2) cout<<0;
    else cout<<-1;
}