#include<bits/stdc++.h>
using namespace std;
// very nice example to print from 1 to n
void forward_num(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    // print at end first call for n-1
    forward_num(n-1);
    cout<<n<<endl;
}
using namespace std;
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    forward_num(n);
    return 0;
}