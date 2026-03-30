#include <iostream>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    
    int sum[100001] = {0};
    for (int i = 1; i <= n; i++) {
        int x;
        cin>>x;
        sum[i] = sum[i-1] + x;
    }
    
    for (int i = 0; i < m; i++) {
        int a,b;
        cin>>a>>b;
        cout<<sum[b] - sum[a-1]<<'\n';
    }
}