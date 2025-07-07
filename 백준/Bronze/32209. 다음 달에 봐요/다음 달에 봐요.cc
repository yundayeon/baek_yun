#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int Q;
    cin>>Q;
    int x[Q],y[Q];
    int num = 0;
    for (int s = 0; s < Q; s++) {
        cin>>x[s]>>y[s];
    }
    for (int i = 0; i < Q; i++) {
        if (x[i] == 1) {
            num += y[i];
        }else if (x[i] == 2) {
            if (num < y[i]) {
            cout<<"Adios";
            return 0;
        }
            num -= y[i];
        }
        
    }cout<<"See you next month";
}
