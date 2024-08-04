// simply implementing binary search concept in array using recursion
#include<bits/stdc++.h>
using namespace std;
bool binary_search(vector<int>& arr,int start,int end,int value){
    if(start>=end)
        return false;
    int mid=(start+end)/2;
    if(arr[mid]==value)
        return true;
    if(arr[mid]>value)
        return binary_search(arr,start,mid,value);
    else
        return binary_search(arr,mid+1,end,value);
}
int main(){
    vector<int> arr={1,2,3,10,100,200};
    int value;
    cin>>value;
    bool find=binary_search(arr,0,arr.size()-1,value);
    cout<<find;
}