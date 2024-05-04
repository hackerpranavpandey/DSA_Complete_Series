// priority queue is explored in this file
#include<bits/stdc++.h>
using namespace std;
int main(){
    // the benefit of pq is that the largest value element always stay at the top
    // inside the data is not stored linearly but in form of tree
    priority_queue<int> pq;
    pq.push(0);
    pq.push(2);
    pq.push(1);
    cout<<pq.top()<<endl; // will print value 2
    pq.pop(); // will pop 2
    cout<<pq.top()<<endl; // wi;l print value 1
    // swap is same here

    // to store minimum value at top below is syntax
    // known as min heap
    priority_queue<int,vector<int>,greater<int>> pq_1;
    pq_1.push(2);
    pq_1.push(1);
    pq_1.push(0);
    cout<<pq_1.top()<<endl;
    pq_1.pop();
    cout<<pq_1.top()<<endl;
    // time complexity analysis is below
    // push and pop in log(n) and top in o(1)
    return 0;
}