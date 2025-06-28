#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<bool>arr(30,false);
    for (int i = 0; i < 28; i++) {
        int a;
        cin>>a;
        arr[a-1] = true;
    } for (int i =0; i<30; i++) {
        if (arr[i] == false) {
            cout<<i+1<<'\n';
        }
    }
}