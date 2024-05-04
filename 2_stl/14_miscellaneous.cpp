#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=7;
    // number of 1 in 7 as 32 bit binary 
    int cnt=__builtin_popcount(7);
    cout<<cnt<<endl;
    long long n=189455455645;
    cout<<__builtin_popcountll(n)<<endl;
    string s;
    cin>>s;
    // next_permutation will print all possible permutations for s
    // but if s is 231 then 
    // only 312 , 321
    do{
        cout<<s;
        cout<<endl;
    } while(next_permutation(s.begin(),s.end()));
    vector<int> v={1,2,3,48,100};
    int maxi = *max_element(v.begin(),v.end());
    cout<<maxi;
    return 0;
}