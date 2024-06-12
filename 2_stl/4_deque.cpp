// this file will help me know and understand deque data structure
#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(0);
    dq.emplace_back(100);
    dq.push_front(200);
    dq.emplace_front(300);
    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();
    // rest functions are same as vector
    return 0;
}