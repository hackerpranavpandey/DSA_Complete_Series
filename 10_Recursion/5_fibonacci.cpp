#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    // base cases
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    // recursive call
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout<<"enter the number whose factorial has to be calculated"<<endl;
    cin>>n;
    int ans=fibonacci(n);
    cout<<ans;
}