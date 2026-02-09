#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,a,b;
    int good = 1;
    int bad = 1;
    cin>>n>>a>>b;

    for (int i = 1; i < n+1; i++) {
        good += a;
        bad += b;
        if (good < bad) {
           swap(good,bad);
        }if (good ==  bad) {
            bad--;
        }
    } cout<<good<<' '<<bad;
}