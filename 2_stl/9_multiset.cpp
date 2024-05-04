// multi set is similar to set only diff is same element can be stored more than once
// same as set a tree is maintained as it is not linear data structure
// it takes logarithmic time for all operations
#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.emplace(1);
    ms.insert(1);
    int cnt=ms.count(1); // wil give 3
    cout<<cnt<<endl;
    ms.erase(ms.find(1)); // wil erase first occurance of 1
    cnt=ms.size(); // all 1 are erased
    cout<<cnt<<endl;
    ms.erase(1);  // to erase all 1
    ms.erase(ms.begin(),ms.end());
    cnt=ms.size(); 
    cout<<cnt<<endl;
    return 0;
}