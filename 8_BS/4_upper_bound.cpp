// lower bound is concept often used in many problem solving such that
// index arr[ind]>m for any target m
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={1,3,4,9,20,50};
    int target;
    cin>>target;
    int low=0;
    int high=sizeof(arr)/sizeof(arr[0]) -1;
    int ans=high+1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;
    // same code in 1 line
    auto it=upper_bound(arr,arr+high,target)-arr+1; //return iterator
    cout<<it;
    return 0;
}