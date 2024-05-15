// simple merge sort is discussed here
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    vector<int> temp;
    int left=low,right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mergesort(int arr[],int low,int high){
        if (low>=high)
            return;
        // idea is simple for each element this partition function will return its position in sorted array
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
}
int main(){
    int arr[10]={1,2,8,10,4,6,1,3,5,-1000};
    mergesort(arr,0,9);
    cout<<"now after calling merge sort"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}