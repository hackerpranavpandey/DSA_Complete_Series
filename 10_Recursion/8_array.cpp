// just trying to print an array recursively
#include<bits/stdc++.h>
using namespace std;
void print_array(vector<int>& arr,int index){
    if(index==0){
        cout<<arr[index]<<" ";
        return;
    }
    print_array(arr,index-1);
    cout<<arr[index]<<" ";
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    print_array(arr,arr.size()-1);
    return 0;
}