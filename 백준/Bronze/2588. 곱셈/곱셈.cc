#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<a*(b%10)<<'\n';
    cout<<a*((b/10)%10)<<'\n';
    cout<<a*(b/100)<<'\n';
    cout<<a*b;
}