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
    int a;
    vector<int>c;
    for (int i = 0; i < n; i++) {
        cin>>a;
        vector<int>b;
        b.clear();
        for (int x = 1; x < a+1; x++)
            if (a % x == 0) {
                b.push_back(x);
            }if (b.size() == 2){
                c.push_back(a);
            }
    }cout<<c.size();
}