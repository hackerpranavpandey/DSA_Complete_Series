// in this file all about sorting is
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second < p2.second)
        return true;
    if(p1.second > p2.second)
        return false;
    // if they are same
    if(p1.first > p2.first)
        return true;
    return false;
}
int main(){
    vector<int> v={1,2,4,3,5};
    // this is default sort
    // the algorithm apply default comparator for this
    sort(v.begin(),v.end());
    for(int n:v){
        cout<<n<<endl;
    }
    // greater<int> is in built comparator that sort in decrease
    cout<<"sorted in reverse order"<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for(int n:v){
        cout<<n<<endl;
    }
    vector<pair<int,int>> v2={{1,2},{2,1},{4,1}};
    // now sometimes we can use our own comparator
    // sorting v2 on basis of second element
    // if it is same then in reverse order
    sort(v2.begin(),v2.end(),comp);
    for(auto it:v2){
        cout<<it.first<<" "<<it.second<<endl;
    }
}