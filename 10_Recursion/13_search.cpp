// simply implementing linear search concept in array using recursion
#include<bits/stdc++.h>
using namespace std;
bool linear_search(vector<int>& arr,int value,int index){
    if(index==arr.size())
        return false;
    if(arr[index]==value)
        return true;
    return linear_search(arr,value,index+1);
}
int main(){
    vector<int> arr={1,2,3,10,100,200};
    int value;
    cin>>value;
    bool find=linear_search(arr,value,0);
    cout<<find;
}