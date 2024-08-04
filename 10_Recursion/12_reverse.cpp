// reverse a string recursively
#include<bits/stdc++.h>
using namespace std;
void reverse(string& t,int start,int end){
    // base case
    if(start>=end)
        return;
    else{
        char mid=t[start];
        t[start]=t[end];
        t[end]=mid;
    }
    reverse(t,start+1,end-1);
}
int main(){
    string s;
    cin>>s;
    reverse(s,0,s.size()-1);
    cout<<s;
    return 0;
} 