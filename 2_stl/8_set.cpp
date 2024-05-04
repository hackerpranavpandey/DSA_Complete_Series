// set data structure implementation is using self balancing tree
// every thing here occurs in log(n) + Rebalance time
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st; // set is not linear container a tree is maintained
    st.insert(1);
    st.emplace(2);
    // it stores unique element and in sorted order so it will not contain 2 again
    st.insert(2);
    st.insert(4);
    // begin() , end() , rbegin() , rend(), size() , empty() and swap()
    // are same here

    //{1,2,4}
    
    auto it = st.find(2); // returns iterator

    auto it_1=st.find(10); // 10 is not there in the set so iterator will point after 4
    int cnt=st.count(1); // will give either 0 or 1 if present 1
    // to erase it takes logarithmic time but if iterator is given it takes o(1)
    st.erase(4);
    st.erase(it);
    st.erase(it,it_1);
    // concept of upper bound and lower bound in set as well as in vector
    auto t1=st.lower_bound(2);
    // if two is present will return iterator
    // else next value like 3 or 4
    auto t2=st.upper_bound(3);
    // to find index of 3
    return 0;
}