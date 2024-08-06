// so its like target sum only but we can use a number any number of time
// {2,3,4}
// if sum is 4 then {2,2,}, {4}
// these are two possible solutions
#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int index,int target){
    if(index==n){
        if(target==0)
            return 1;
        return 0;
    }
    if(target<0)
        return 0;
    return solve(a,n,index+1,target)+solve(a,n,index,target-a[index]);

}
int main(){
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int index=0;
    int target;
    cin>>target;
    int ans=solve(a,n,index,target);
    cout<<ans;
}