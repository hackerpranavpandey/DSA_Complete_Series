// here we will generate all the subsets of any given array
// so there are two ways for doing this one is backtracking and another is using bit wise concept
// so back tracking is simple generate all subset first by including any number and then exclude it
// #include<bits/stdc++.h>
// using namespace std;
// void sub_set(vector<int>& array,vector<vector<int>>& res,vector<int>& subset,int index){
//             res.push_back(subset);
//             for(int i=index;i<array.size();i++){
//                 // first include the element
//                 subset.push_back(array[i]);
//                 // find all subset in which it is present
//                 sub_set(array,res,subset,i+1);
//                 subset.pop_back(); // exclude it backtracking 
//             }
// }
// int main(){
//     vector<int> array={1,2,3};
//     vector<vector<int>> res;
//     vector<int> subset;
//     sub_set(array,res,subset,0);
//     for(int i=0;i<res.size();i++){
//         for(int j=0;j<res[i].size();j++){
//             cout<<res[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
void sub_set(vector<int>& arr,vector<vector<int>>& ans,vector<int>& subset,int index){
    ans.push_back(subset);
    for(int i=index;i<arr.size();i++){
        subset.push_back(arr[i]);
        sub_set(arr,ans,subset,i+1);
        subset.pop_back();
    }
}
int main(){
    vector<int> arr={1,2,3,4};
    vector<vector<int>> ans;
    vector<int> subset;
    sub_set(arr,ans,subset,0);
    for(vector<int> v:ans){
        for(int n:v){
            cout<<n<<" ";
        }
        cout<<endl;
    }
    return 0;
}