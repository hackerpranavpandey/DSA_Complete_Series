// recursive insertion sort is discussed here
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int i,int n){
    if(i==n)
        return;
    int j=i;
    while(j>0){
        if(arr[j-1]>arr[j]){
             swap(arr[j],arr[j-1]);
             j--;
        }
        else
            break;
    }
    // simple way instead of doing in one loop call insertion_sort again
    insertion_sort(arr,i+1,n);
}
int main(){
    int arr[10]={1,2,8,10,4,6,1,3,5,9};
    insertion_sort(arr,0,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}