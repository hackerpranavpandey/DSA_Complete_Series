// here pair data type is explored by me
#include<bits/stdc++.h>
using namespace std;
int main(){
    // may or may not give that us p={} or simple p both would work here
    pair<int,int> p={};
    cin>>p.first;
    cin>>p.second;
    cout<<"here are outputs of pair data type "<<p.first<<" "<<p.second;
    cout<<endl;
    // below is wrong way to access the entire data type p
    // so we need to access individually first and second element of pair data type
    // cout<<p;
    // we can even use array vector or any data type with pair
    // take various index value as input and print that
    pair<int,char> arr[]={{1,'a'},{2,'b'}};
    cin>>arr[2].first;
    cin>>arr[2].second;
    cout<<arr[1].first<<endl;
    cout<<arr[2].second<<endl;
    // pair inside pair 
    pair<int,pair<int,int>> nest={1,{2,3}};
    cout<<nest.first<<endl;
    // more similar like pair<pair<pair<int,int>,int>,int>
    cout<<nest.second.first<<endl;
    return 0;
}