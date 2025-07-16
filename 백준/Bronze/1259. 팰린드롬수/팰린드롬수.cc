#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a,b;
    while (cin>>a) {
        b = a;
        reverse(a.begin(),a.end());
        if (a == "0") {
            return 0;
        }
        if (a == b) {
            cout<<"yes"<<'\n';
        }else if (a != b) {
            cout<<"no"<<'\n';
        }
    }
}