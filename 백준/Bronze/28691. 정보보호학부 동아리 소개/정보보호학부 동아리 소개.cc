#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>>s;
    if (s == "M") {
        cout<<"MatKor";
    } else if (s == "W") {
        cout<<"WiCys";
    } else if (s == "C") {
        cout<<"CyKor";
    } else if (s == "A") {
        cout<<"AlKor";
    } else if (s == "$") {
        cout<<"$clear";
    }
}