// this is very famous problem to search the index position for any element
// if present return the index else index where it should be 
// implement lower bound concept here
// lower bound is concept often used in many problem solving such that
// index arr[ind]>=m for any target m
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={1,3,4,9,20,50};
    int target;
    cin>>target;
    int low=0;
    int high=sizeof(arr)/sizeof(arr[0]) -1;
    if(arr[high]<target){
        cout<<high+1;
        return 0;
    }
    auto it=lower_bound(arr,arr+high,target)-arr; //return iterator
    cout<<it;
    return 0;
}