#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a;
    int t;
    cin>>t;
    int s = 0;
    for (int i = 0; i < t; i++) {
        cin>>a;
        s = 0;
        for (int x = 0; x < a.size(); x++) {
            if (a[x] == 'U') {
                s++;
            }else if (a[x] == 'D') {
                break;
            }
        }cout<<s<<'\n';
    }
}
