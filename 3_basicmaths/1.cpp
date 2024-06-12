// in this file to compute number of digits in any number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // another way is to keep dividing by 10 till 0 comes
    int cnt;
    if(n==0)
        cnt=1;
    else
        // direct computation instead of using any division method
        cnt=log10(n)+1;
    cout<<cnt;
}