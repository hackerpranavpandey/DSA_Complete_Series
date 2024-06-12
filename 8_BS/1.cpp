// simple algorithm for binary search
// so we always keep two variable low and high and between this is our search space 
// mid which is low+high/2 tells element is present in left or right from mid
#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int>& arr,int target){
    int low=0;
    int high=arr.size();
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target)
            high=mid;
        else
            low=mid+1;
    }
    return -1;
}
int main(){
    vector<int> arr={1,2,3,4,6,8,9,10};
    int target;
    cin>>target;
    cout<<binary_search(arr,target)<<endl;
    return 0;
}