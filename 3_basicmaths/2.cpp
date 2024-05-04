// armstrong number is discussed here
// when the sum of all digits raised to power equal number of digits
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=to_string(n).size();
    long long int sum=0;
    int t=n;
    while(t > 0){
        int ld=t%10;
        sum+=pow(ld,num);
        t=t/10;
    }
    cout<<sum<<endl;
    if(sum==n)
        cout<<"1";
    else 
        cout<<"0";
    return 0;
}