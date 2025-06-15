#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    int sum = 0;
    while (cin>>n) {
        sum += n;
    } cout<<sum;
}