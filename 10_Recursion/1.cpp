// a very simple recursive program is discussed here
// this is part of recursion course from Coder Army
#include<bits/stdc++.h>
using namespace  std;
void print_days(int n){
    if(n==0){
        cout<<"Hey man its your birthday"<<endl;
        return;
    }
    cout<<n<<" days left"<<endl;
    print_days(n-1);
}
int main(){
    int days_left;
    cout<<"Enter the number of days left fro your birthday:"<<endl;
    cin>>days_left;
    print_days(days_left);
}