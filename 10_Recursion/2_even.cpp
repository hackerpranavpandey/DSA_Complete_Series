#include<bits/stdc++.h>
using namespace std;
// this prints from n to 2
// think how to do from 2 to n 
// just two line swap works here
void even(int n){
    if(n==2){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    return even(n-2);
}
using namespace std;
int main(){
    int n;
    cout<<"Enter even number"<<endl;
    cin>>n;
    even(n);
    return 0;
}