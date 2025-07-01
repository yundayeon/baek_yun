#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int h,m;
    cin>>h>>m;
    int min;
    min = m - 45;
    if (min < 0 && h > 0) {
        cout<<h-1<<' '<<min+60;
    }else if (min < 0 && h <= 0) {
        cout<<h+23<<' '<<min+60;
    }else if (min >= 0 && h >= 0) {
        cout<<h<<' '<<min;
    }
}