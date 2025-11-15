//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
#include <stack>
#include <iomanip>
using namespace std;

//12813 이진수 연산
//15596 정수 N개의 합
//11966 2의 제곱인가
//1094 막대기


int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    int a_cnt = 0, b_cnt = 0, c_cnt =0;
    if (t % 10 != 0)
        cout<<"-1";
    else {
        while (t > 9) {
            if (t >= 300) {
                a_cnt++;
                t = t-300;
            }else if (t < 300 && t >= 60) {
                b_cnt++;
                t = t-60;
            }else if (t < 60) {
                c_cnt++;
                t = t-10;
            }
        }
        cout<<a_cnt<<' '<<b_cnt<<' '<<c_cnt;
    }
}