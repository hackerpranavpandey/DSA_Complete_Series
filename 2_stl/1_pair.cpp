// here pair data type is explored by me
#include<bits/stdc++.h>
using namespace std;
int main(){
    // may or may not give that us p={} or simple p both would work here
    pair<int,int> p={};
    cin>>p.first;
    cin>>p.second;
    cout<<"here are outputs of pair data type"<<p.first<<" "<<p.second;
    cout<<endl;
    // below is wrong way to access the entire data type p
    // so we need to access individually first and second element of pair data type
    // cout<<p;
    return 0;
}