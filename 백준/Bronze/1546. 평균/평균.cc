#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    float m[n];
    float t = 0;
    for (int i = 0; i < n; i++) {
        cin>>m[i];
    } sort(m,m+n);
    for (int x = 0; x < n; x++) {
        t += m[x]/m[n-1]*100;
    } cout<< t / n;
}
