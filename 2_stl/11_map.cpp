// map data structure is here 
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,pair<int,int>> m;
    // stores key value pair which can be any data structure
    m[1]={0,100}; // 1 is key and {1,2} is corresponding value
    // remember key is unique
    // this is correct way of storing value in map
    // m.insert(1,{3,4}); invalid operation
    m.insert({2,{0,100}});
    cout<<m[1].second<<endl;
    // iteration allow access to key 
    for(auto it: m){
        cout<<it.first;
    }
    return 0;
}