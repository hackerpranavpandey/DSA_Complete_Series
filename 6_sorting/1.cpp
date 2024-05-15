// simple selection sort
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,8,9,2,4,1,4,0,2,10};
    for(int i=0;i<10;i++){
        // store the index of minimum element in unsorted part
        int mini=i;
        for(int j=i+1;j<10;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        // at last swap present with arr[mini]
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
    cout<<"The sorted array is"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}