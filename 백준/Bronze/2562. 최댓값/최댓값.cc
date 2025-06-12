#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int arr[9];
    for (int i = 0; i < 9; i++) {
        cin>>arr[i];
    }
    cout<<*max_element(arr,arr+9)<<'\n';
    for (int i=0; i<9; i++) {
        if (arr[i]==*max_element(arr,arr+9)) {
            cout<<i+1;
            return 0;
        }
    }
}