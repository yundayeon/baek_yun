#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string sentence;
    getline(cin, sentence);

    int count = 0;
    bool inWord = false;

    for (char c : sentence) {
        if (c != ' ' && !inWord) {
            inWord = true;
            count++;
        } else if (c == ' ') {
            inWord = false;
        }
    }cout << count;
}