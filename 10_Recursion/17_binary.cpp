// converting any decimal to binary recursively
#include<bits/stdc++.h>
using namespace std;
string convert(int n){
    if(n==0)
        return "";
    else
        return convert(n/2)+to_string(n&1);
}
int main(){
    int n;
    cin>>n;
    string binary = "";
    binary=convert(n);
    cout<<binary;
    return 0;
}