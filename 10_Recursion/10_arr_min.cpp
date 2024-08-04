// sum of all elements of array recursively
#include<bits/stdc++.h>
using namespace std;
int sum_array(vector<int>& arr,int index){
    if(index==0){
        return arr[0];
    }
    return min(arr[index],sum_array(arr,index-1));
}

int main(){
    vector<int> arr = {1,2,3,4,5,0};
    int minimum=sum_array(arr,arr.size()-1);
    cout<<minimum<<endl;
    return 0;
}