// sum of all elements of array recursively
#include<bits/stdc++.h>
using namespace std;
int sum_array(vector<int>& arr,int* sum,int index){
    if(index==-1){
        return 0;
    }
    return arr[index]+sum_array(arr,sum,index-1);
}

int main(){
    vector<int> arr = {1,2,3,4,5,100};
    int sum=sum_array(arr,0,arr.size()-1);
    cout<<sum<<endl;
    return 0;
}