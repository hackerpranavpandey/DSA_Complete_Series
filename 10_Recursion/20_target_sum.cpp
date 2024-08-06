#include<bits/stdc++.h>
using namespace std;
// so this will simply tell if there is a subset where sum of all elements equals target
bool target_sum(int a[],int n,int target,int index,int sum){
    if(index==n){
        return false;
    }
    // don't include present element
    bool c_1=target_sum(a,n,target,index+1,sum);
    sum+=a[index];
    if(sum==target)
        return true;
    // include present element
    bool c_2=target_sum(a,n,target,index+1,sum);
    return c_1 || c_2;
}
int main(){
    int a[]={2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int target;
    cin>>target;
    int index=0;
    bool result=target_sum(a,n,target,index,0);
    cout<<result;
}