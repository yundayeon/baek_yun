#include <iostream>
#include <algorithm>


using namespace std;

int main() {
    int score[8];
    int arr[8];
    vector<int>n;;
    int sum = 0;

    for (int i = 0; i < 8; i++) {
        cin>>score[i];
        arr[i] = score[i];
    } sort(score,score+8);
        for (int i = 3; i < 8; i++) {
            sum += score[i];
            for (int j = 0; j < 8; j++) {
                if (score[i] == arr[j]) {
                    n.push_back(j+1);
            }
        }
    }cout<<sum<<'\n';
    sort(n.begin(),n.end());
    for (int x = 0; x < 5; x++) cout<<n[x]<<' ';
}