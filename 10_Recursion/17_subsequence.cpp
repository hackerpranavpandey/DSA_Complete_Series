// printing the sub sequence of any given sequence
// now the concept is either to include an element or not
// pass temp by value
// this can be extended to string too
#include<bits/stdc++.h>
using namespace std;
void subsequence(vector<int>& num,vector<vector<int>>& sub_sequence,vector<int> temp,int index){
    if(index==num.size()){
        sub_sequence.push_back(temp);
        return;
    }
    // donot include present index value
    subsequence(num,sub_sequence,temp,index+1);
    // include and then call again
    temp.push_back(num[index]);
    subsequence(num,sub_sequence,temp,index+1);
}
int main(){
    vector<int> num={1,2,3};
    vector<vector<int>> sub_sequence;
    vector<int> temp;
    subsequence(num,sub_sequence,temp,0);
    for(vector<int> v:sub_sequence){
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}