#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin>>n;
    long long a,b;
    for (int i = 0; i < n; i++) {
        cin>>a>>b;
        cout<<std::lcm(a,b)<<'\n';
    }
}
