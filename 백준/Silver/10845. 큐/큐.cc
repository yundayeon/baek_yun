//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
#include <stack>
#include <queue>
#include <iomanip>
using namespace std;

//12813 이진수 연산
//15596 정수 N개의 합
//1094 막대기

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a,s;
    cin>>a;
    string str;
    queue<int>q;
    for (int i = 0; i < a; i++) {
        cin>>str;
        if (str == "push") {
            cin>>s;
            q.push(s);
        }else if (str == "front") {
            if (q.empty() == 0) {
                cout<<q.front()<<'\n';
            }else cout<<"-1"<<'\n';
        }else if (str == "back") {
            if (q.empty() == 0) {
                cout<<q.back()<<'\n';
            }else cout<<"-1"<<'\n';
        }else if (str == "size") {
            cout<<q.size()<<'\n';
        }else if (str == "empty") {
            cout<<q.empty()<<'\n';
        }else if (str == "pop") {
            if (q.empty() == 0) {
                cout<<q.front()<<'\n';
                q.pop();
            }else cout<<"-1"<<'\n';
        }
    }
}