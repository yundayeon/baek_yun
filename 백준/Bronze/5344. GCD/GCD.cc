#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    while (n--) {
        int a,b;
        cin>>a>>b;
        cout<<gcd(a,b)<<'\n';
    }
}