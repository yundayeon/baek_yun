#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a,b,c;
    int h,m;
    cin>>a>>b;
    cin>>c;
    if (b+c >= 60) {
        h = a + 1;
        m = b + c - 60;
        
        while (m >= 60) {
            h = h + 1;
            m = m - 60;
        }if (h >= 24) {
            h = h - 24;
            }
        cout<<h<<' '<<m;
    } else cout<<a<<' '<<b+c;
}
