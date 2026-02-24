#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n,m;
    while (true) {
        cin>>n>>m;
        if ( n == 0 && m == 0) {
            return 0;
        }
        int nn[n];
        int mm[m];
        for (int i = 0; i < n; i++) {
            cin>>nn[i];
        }for (int i = 0; i < m; i++) {
            cin>>mm[i];
        }
        int cnt = 0;
        int i = 0; int j = 0;
        while (i < n && j < m) {
            if (nn[i] == mm[j]) {
                cnt++;
                i++;
                j++;
            }
            else if (nn[i] < mm[j]) i++;
            else if (nn[i] > mm[j]) j++;
        } cout<<cnt<<'\n';
    }
}