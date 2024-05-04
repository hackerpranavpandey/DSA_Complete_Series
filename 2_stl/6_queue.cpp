// this file will help me know and understand deque data structure
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(0);
    q.push(20); // {0,20}
    q.emplace(40); //{0,20,40}

    q.back()+=5;
    cout<<q.back();
    cout<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    return 0;
}