#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    vector<long long> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>s;
        reverse(s.begin(),s.end());
        v.push_back(stoll(s));
    }sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++) {
        cout<<v[i]<<'\n';
    }
}
