// so the problem is like we have to climb n stairs
// at one a person can either climb one or 2
// so for n it should be total number of ways to do (n-1)+(n-2)
// same as fibonacci sequence
#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    // base case
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    // recursive case
    return solve(n-1)+solve(n-2);
}
int main(){
    int n;
    cout<<"enter number of stairs: "<<endl;
    cin>>n;
    int ans=solve(n);
    cout<<ans<<endl;
}