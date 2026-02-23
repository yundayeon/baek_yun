#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n,k;
    cin>>n>>k;
    queue<int>a;
    for (int i = 1; i <= n; i++) {
        a.push(i);
    } cout<<'<';
    while (a.size() != 0) {
        for (int i = 1; i < k; i++) {
            a.push(a.front());
            a.pop();
        } cout<<a.front();
        if (a.size() > 1) {
            cout<<", ";
        } a.pop();
    }cout<<'>';
    return 0;
}
