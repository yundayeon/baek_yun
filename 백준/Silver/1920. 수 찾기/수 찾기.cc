#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin>>n;

  vector<int>arr(n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());

  int m;
  cin>>m;
  while (m--) {
    int x;
    cin>>x;
    cout<<binary_search(arr.begin(),arr.end(),x)<<"\n";
  }
}