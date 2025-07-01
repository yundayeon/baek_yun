#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string d,j;
    cin>>j;
    cin>>d;
    if (d.length() <= j.length()) {
        cout<<"go";
    } else cout<<"no";
}