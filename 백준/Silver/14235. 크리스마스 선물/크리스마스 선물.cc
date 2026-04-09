#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    priority_queue<int>p;
    for (int i = 0; i < n; i++) {
        int a;
        cin>>a;
        if (a == 0 && p.empty() == 1) {
            cout<<-1<<'\n';
        }else if (a == 0) {
            cout<<p.top()<<'\n';
            p.pop();
        } else {
            for (int j = 0; j < a; j++) {
                int b;
                cin>>b;
                p.push(b);
            }
        }
    }
}