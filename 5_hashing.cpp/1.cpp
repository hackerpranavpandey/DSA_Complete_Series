// this file will teach all about hashing 
// so all those ways for computing number frequency y=using O(n^2) 
// or array approach but it has restriction that for any num>=10^6/7
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    // everything is stored in sorted way
    // for all the operations it take log(n) time complexity
    // but unordered map take average O(1) but in worst case it can take upto O(n)
    map<int,int> mpp;
    // for unordered map jst make unordered_amp instead of map
    unordered_map<int,int> um;
    for(int i=0;i<10;i++){
        mpp[arr[i]]++;
        // so it works but only difference is things are not 
        // sorted as in map so it take avg O(1) and at max O(n) time complexity
        um[arr[i]]++;
    }
    cout<<"enter the numbers whose frequency you want to compute"<<endl;
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<um[num] << endl;
    }
    return 0;
}