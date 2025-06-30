#include <iostream>
#include <string>
using namespace std;

int main() {
  int x,n,a,b,sum;
  cin>>x;
  cin>>n;
  sum = 0;
  for (int i=0; i < n; i++) {
    cin>>a>>b;
    sum += a*b;
    //cout<<sum<<'\n';
  }
  if (sum == x) {
    cout<<"Yes";
  }else cout<<"No";
}