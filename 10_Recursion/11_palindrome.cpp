//checking if a string is palindrome
#include<bits/stdc++.h>
using namespace std;
bool check(string& t,int start,int end){
    // base condition
    if(start>=end)
        return true;
    if(t[start]!=t[end])
        return false;
    else 
        return check(t,start+1,end-1);
}
int main(){
    string s;
    cin>>s;
    bool ans=check(s,0,s.size()-1);
    cout<<ans<<endl;
    return 0;
} 