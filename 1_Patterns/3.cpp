// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int start=0;
        if(i%2==1)
            start=1;
        for(int j=0;j<i;j++){
            cout<<start<<" ";
            start+=1;
            start=start%2;
        }
        cout<<endl;
    }
    return 0;
}