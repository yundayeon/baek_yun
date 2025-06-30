#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a,b,c;
    cin>>a>>b>>c;
    if (b == c && b != a) {
        cout<<'A';
    }else if (a == c && a != b) {
        cout<<'B';
    }else if (a == b && a != c) {
        cout<<'C';
    }else cout<<'*';
}