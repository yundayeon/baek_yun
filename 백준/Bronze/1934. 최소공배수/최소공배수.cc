#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        cout<<lcm(a,b)<<'\n';
    }
}