#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string str1;
    string str2;
    cin>>str1;
    str2 = str1;
    reverse(str1.begin(),str1.end());
    if (str1 == str2) {
        cout<<"1";
    }else if (str1 != str2) {
        cout<<"0";
    }

}