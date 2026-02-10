#include <iostream>
#include <queue>
#include <algorithm>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int main() {
    cin.tie(0) ->sync_with_stdio(0);
    int n;
    cin>>n;
    queue<int>q;
    int last;
    if (n == 1) {
        cout<<1;
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    while (true) {
        q.pop();
        int a = q.front();
        q.pop();
        q.push(a);
        if (q.size() == 1) {
            last = q.front();
            break;
        }
    } cout<<last;
}