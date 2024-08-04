#include<bits/stdc++.h>
using namespace std;
int find_mean(vector<int>& arr,int index,int n){
    if(index==n)
        return 0;
    return arr[index]+find_mean(arr,index+1,n);
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,110};
    int n=arr.size();
    int mean=find_mean(arr,0,n);
    mean/=n;
    cout<<"mean:"<<mean<<endl;
    return 0;
}