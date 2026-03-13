#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[9][9];
    int a = 0;
    int b = 0;
    int c = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin>>arr[i][j];
        }
    } for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[i][j] > a) {
                a = arr[i][j];
                b = i;
                c = j;
            } else a = a;
        }
    }cout<<a<<'\n'<<b+1<<' '<<c+1;
}