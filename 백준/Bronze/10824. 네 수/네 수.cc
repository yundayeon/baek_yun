#include <iostream>
#include <string>
#include <sstream>
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
    stringstream ss(s);
    stringstream sss(f);
    long long s1,f1;
    ss>>s1;
    sss>>f1;
    cout<<s1+f1;
}