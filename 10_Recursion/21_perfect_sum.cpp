// just a small change from previous find number of such subset
#include<bits/stdc++.h>
using namespace std;
// O(2^n) time it is going to take 
int target_sum(int a[],int n,int target,int index){
    if(index==n){
        if(target==0)
            return 1;
        return 0;
    }
    // first include then exclude the element
    return target_sum(a,n,target,index+1)+target_sum(a,n,target-a[index],index+1);
}
int main(){
    int a[]={2,3,4,5,6,0};
    int n=sizeof(a)/sizeof(a[0]);
    int target;
    cin>>target;
    int index=0;
    int num=target_sum(a,n,target,index);
    cout<<num;
}