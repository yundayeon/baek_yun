#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int arr[4];
    for (int i = 0; i < 4; i++) {
        cin>>arr[i];
    }
    cout<<abs((arr[0]+arr[3])-(arr[1]+arr[2]));
}