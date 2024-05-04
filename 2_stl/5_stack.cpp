// this file will help me know and understand stack data structure
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(0);
    s.push(200);
    s.push(400);
    s.emplace(600);
    // we can access top element
    cout<<s.top()<<endl;
    s.pop(); 
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl; // if stack is empty or not
    stack<int> s1,s2;
    s1.push(10);
    // swap two given stack
    s1.swap(s2);
    cout<<s1.size()<<endl;
    cout<<s2.size()<<endl;
    return 0;
}