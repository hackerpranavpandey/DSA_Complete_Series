#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n<=1 )
        return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter the number whose factorial has to be calculated"<<endl;
    cin>>n;
    int ans=fact(n);
    cout<<ans;
}