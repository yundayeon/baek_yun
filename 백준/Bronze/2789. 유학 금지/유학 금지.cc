#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>>s;
    string a = "CAMBRIDGE";
    for (char c: a) {
        s.erase(remove(s.begin(),s.end(),c),s.end());
        }cout<<s;
    }
