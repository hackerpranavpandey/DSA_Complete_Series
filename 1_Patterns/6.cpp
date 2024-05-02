//    A 
//   ABA
//  ABCBA
// ABCDCBA
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        char c='A';
        for(int j=1;j<=2*i-1;j++){
            cout<<c;
            if(j<i)
                c+=1;
            else 
                c-=1;
        }
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}