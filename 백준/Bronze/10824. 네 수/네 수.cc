#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a,b,c,d;
    string s,f;
    cin>>a>>b>>c>>d;
    s.append(a + b);
    f.append(c + d);
    long long s1 = stoll(s);
    long long f1 = stoll(f);
    cout<<s1+f1;
}