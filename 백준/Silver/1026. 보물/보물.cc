#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    int A[n];
    int B[n];
    int s = 0;
    for (int i = 0; i < n; i++) {
        cin>>A[i];
    }
    for (int i = 0; i < n; i++) {
        cin>>B[i];
    } sort (A,A+n);
    sort(B,B+n,greater<int>());
    for (int i = 0; i < n; i++) {
        s += A[i] * B[i];
    } cout<< s;
}
