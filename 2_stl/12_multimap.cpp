// multimap is same as map but duplicates are allowed
// unordered is same as map like diff between unordered set and set 
#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<int,int> m;
    m.insert({1,10});
    m.insert({1,100});
    unordered_map<int,int> mp;
    // similarly we have unordered map
    int n1,n2;
    cin>>n1>>n2;
    mp.insert({n1,n2});
    int t;
    cin>>t;
    bool find=mp.find(t)==mp.end();
    cout<<find<<endl;
}