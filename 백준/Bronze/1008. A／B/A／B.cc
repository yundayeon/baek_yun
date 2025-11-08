#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(15)<<(double)a /b;
}