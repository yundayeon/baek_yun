#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t,r;
    string s;
    cin>>t;
    if ( t >= 1 && t <= 1000){
        for (int i = 0; i < t; i++) {
            cin>>r>>s;
            if (r >= 1 && r <= 8 && s.length() <= 20 && s.length() >= 1) {
                for (int x =0; x < s.length(); x++)
                    for (int j = 0; j < r; j++) {
                        cout<<s[x];
                    } cout<< '\n';
            } else return 0;
        }
    }else return 0;
}