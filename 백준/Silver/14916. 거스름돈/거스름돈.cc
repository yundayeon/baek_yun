#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n;
    int charge = 0;
    cin>>n;

    while (n%5 != 0) {
        n -= 2;
        charge++;
        if (n < 0) {
            cout<<-1;
            return 0;
        }
    }charge += n / 5;
    cout<<charge;
}