// recursive code for binary search
#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int>& arr,int low,int high,int target){
    if(low>high)
        return -1;
    int mid=(low+high)/2;
    if(arr[mid]==target)
        return mid;
    else if(arr[mid]>target)
        return binary_search(arr,low,mid,target);
    else
        return binary_search(arr,mid+1,high,target);
}
int main(){
    vector<int> arr={1,2,3,4,6,8,9};
    int target;
    cin>>target;
    cout<<binary_search(arr,0,arr.size(),target)<<endl;
    return 0;
}