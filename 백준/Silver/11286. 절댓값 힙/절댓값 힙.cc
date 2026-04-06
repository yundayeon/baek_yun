#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

struct comp {
    bool operator()(int a,int b) {
        if (abs(a)==abs(b)) return a>b;
        return abs(a)>abs(b);
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);
    priority_queue<int,vector<int>,comp>p;

    int n;
    cin>>n;
    int x;
    for (int i = 0; i < n; i++) {
        cin>>x;
        if (x == 0 && p.empty() == 1) {
            cout<<'0'<<'\n';
        }else if (x == 0) {
            cout<<p.top()<<'\n';
            p.pop();
        }else {
            p.push(x);
        }
    }
}