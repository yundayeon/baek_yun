//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    char arr[5][15]={0};

    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 0; i < 15; i++) {
        for (int k = 0; k < 5; k++) {
            if (arr[k][i] != NULL)
                cout << arr[k][i];
        }
    }

    return 0;
}