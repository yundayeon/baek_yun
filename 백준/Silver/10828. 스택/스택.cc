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
    int n;
    cin>>n;
    string str;
    int e;
    stack<int>st;

    for (int i = 0; i < n; i++) {
        cin>>str;
        if (str == "push") {
            cin>>e;
            st.push(e);
        }else if (str == "top" && st.empty() != 1) {
            cout<<st.top()<<'\n';
        }else if (str == "top" && st.empty() == 1) {
            cout<<"-1"<<'\n';
        }else if (str =="size") {
            cout<<st.size()<<'\n';
        }else if (str == "empty") {
            cout<<st.empty()<<'\n';
        }else if (str == "pop" && st.empty() != 1) {
            cout<<st.top()<<'\n';
            st.pop();
        }else if (str == "pop" && st.empty() == 1) {
            cout<<"-1"<<'\n';
        }
    }
}