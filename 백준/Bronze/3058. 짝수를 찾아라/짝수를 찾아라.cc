#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    while (n--) {
        vector<int>arr;
        int sum = 0;
        for (int i = 0; i < 7; i++) {
            int x;
            cin>>x;
            if (x%2 == 0) {
                arr.push_back(x);
                sum += x;
            }
        }cout<<sum<<' '<<*min_element(arr.begin(),arr.end())<<'\n';
    }
}