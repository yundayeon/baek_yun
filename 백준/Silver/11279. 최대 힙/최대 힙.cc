#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    priority_queue<int>p;
    int n;
    cin>>n;
    int a;
    for (int i = 0; i < n; i++) {
        cin>>a;
        p.push(a);
        if (a == 0 && p.empty() == 1) {
            cout<<'0'<<'\n';
        }else if (a == 0) {
            cout<<p.top()<<'\n';
            p.pop();
        }
    }
}