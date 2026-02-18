#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    string s;
    for (int i = 0; i < n; i++) {
        cin>>s;
        reverse(s.begin(),s.end());
        cout<<s<<'\n';
    }
}