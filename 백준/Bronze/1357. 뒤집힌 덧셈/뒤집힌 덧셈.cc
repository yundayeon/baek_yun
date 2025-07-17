#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string x,y;
    cin>>x>>y;
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    int a = stoi(x);
    int b = stoi(y);
    int sum = a +b;
    string s = to_string(sum);
    reverse(s.begin(),s.end());
    cout<<stoi(s);
}