// this file will be about finding GCD of given two numbers
// logic is simple
// (greater,smaller)
// (smaller,greater%smaller)
// repeat till second tern becomes 0
// then the first tern is the answer
#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b){
    // base case
    if(b==0)
        return a;
    return solve(b,a%b);
}
int main(){
    int n_bigger;
    int n_smaller;
    cout << "Enter two numbers: ";
    cin >> n_bigger >> n_smaller;
    int ans=solve(n_bigger,n_smaller);
    cout<<"gcd of two inputs are"<<endl;
    cout<<ans<<endl;
}