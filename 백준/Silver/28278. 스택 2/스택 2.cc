#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin>>n;
    int a,b;
    stack<int>s;
    for (int i = 0; i < n; i++) {
        cin>>a;
        if (a == 1) {
            cin>>b;
            s.push(b);
        }else if (a == 2) {
            if (s.size() != 0) {
                cout<<s.top()<<'\n';
                s.pop();
            }else cout<<"-1"<<'\n';
        }else if (a == 3) {
            cout<<s.size()<<'\n';
        }else if (a == 4) {
            cout<<s.empty()<<'\n';
        }else if (a == 5) {
            if (s.size() != 0) {
                cout<<s.top()<<'\n';
            }else cout<<"-1"<<'\n';
        }
    }
}