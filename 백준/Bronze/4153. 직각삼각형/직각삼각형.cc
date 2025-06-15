#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a,b,c;
    while (true) {
        cin>>a>>b>>c;
        if (a == 0 && b==0 && c==0) {
            return 0;
        }
        if (a*a + b*b == c*c) {
            cout<<"right"<<'\n';
        }else if (a*a + c*c == b*b){
            cout<<"right"<<'\n';
        }else if (b*b + c*c == a*a) {
            cout<<"right"<<'\n';
        }else if (a*a + b*b != c*c) {
            cout<<"wrong"<<'\n';
        } else if (a*a + c*c != b*b){
            cout<<"wrong"<<'\n';
        }else if (b*b + c*c != a*a) {
            cout<<"wrong"<<'\n';
        }
        
    }
    }