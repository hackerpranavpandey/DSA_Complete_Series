// A
// BB
// CCC
// DDDD
// EEEEE
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        // just using the ascii value
        char c='A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<c;
        }
        cout<<endl;
    }
}