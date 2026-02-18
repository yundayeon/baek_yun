#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    string s;
    cin>>s;
    string a = "abcdefghijklmnopqrstuvwxyz";
    int arr[26] = {0,};
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            if (s[i] == a[j]) {
                arr[j] += 1;
            }
        }
    } for (int i = 0; i < 26; i++) {
        cout<<arr[i]<<' ';
    }
}