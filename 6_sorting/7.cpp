// recursive bubble sort is done here
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int i,int n){
        if(i==n)
            return;
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
        bubble_sort(arr,i+1,n);
}
int main(){
    int arr[10]={1,2,8,10,4,6,1,3,5,10};
    bubble_sort(arr,0,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}