// randomized way elements are stored
// data is stored like hash table
// average case for all operations are O(1) and worst is O(n)
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> st;
    // except lower_bound and upper_bound function other work
    st.insert(1);
    // if element is not present st.find() return st.end()
    cout<<(st.find(1)==st.end())<<endl;
    cout<<(st.find(0)==st.end())<<endl;
    return 0;
}