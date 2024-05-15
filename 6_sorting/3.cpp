// simple bubble sort
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,2,8,10,4,6,1,3,5,10};
    for(int i=1;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}