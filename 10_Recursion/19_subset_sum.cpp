#include<bits/stdc++.h>
using namespace std;
void subset_sum(vector<int>& set,int sum,int index,vector<int>& sum_array){
    if(index==set.size()){
        sum_array.push_back(sum);
        return;
    }
    // not included
    subset_sum(set,sum,index+1,sum_array);
    // included
    sum+=set[index];
    subset_sum(set,sum,index+1,sum_array);
}
int main(){
    vector<int> set={3,4,5};
    int sum=0;
    int index=0;
    vector<int> sum_array;
    subset_sum(set,sum,index,sum_array);
    int ans=0;
    for(int n:sum_array){
        ans+=n;
    }
    cout<<ans;
    return 0;
}