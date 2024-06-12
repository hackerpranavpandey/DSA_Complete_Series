#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(1);
    ls.push_front(5);
    ls.emplace_front(0);
    // rst function same as vector
    for(auto it:ls){
        cout<<it<<endl;
    }
    // cout<<ls[0]; // wring way to access so iterator is good
    return 0;
}