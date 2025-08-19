//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;
//(n k) = n! / (k! * (n-k)!)
int fac(int n) {
    int sum = 1;
    for (int i = 1; i < n+1; i++) {
        sum *= i;
    } return sum;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a,b;
    cin>>a>>b;
    cout<<fac(a) / (fac(b) * fac(a-b));

}