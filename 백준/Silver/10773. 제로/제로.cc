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
    int k;
    cin>>k;
    stack<int>st;
    int sum = 0;
    for (int i = 0; i < k; i++) {
        int a;
        cin>>a;
        if (a != 0) st.push(a);
        else st.pop();

    } while (st.size() != 0) {
        sum += st.top();
        st.pop();
    }cout<<sum;

}
