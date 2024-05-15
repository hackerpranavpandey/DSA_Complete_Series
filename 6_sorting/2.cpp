// simple insertion sort is done here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,2,8,10,4,6,1,3,5,9};
    for(int i=1;i<10;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1])
                swap(arr[j],arr[j-1]);
            else 
                break;
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}