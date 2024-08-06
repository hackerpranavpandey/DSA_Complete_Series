 // so simple logic of subsequence with some condition
 // no of ) <= no of (
#include<bits/stdc++.h>
using namespace std;
void generate_brackets(int n, vector<string>& generate, string temp,int open,int close){
    if(temp.size()==2*n){
        generate.push_back(temp);
        return;
    }
    if(open<n){
        generate_brackets(n,generate,temp+'(',open+1,close);
    }
    if(close<open){
        generate_brackets(n,generate,temp+')',open,close+1);
    }
}
int main(){
    int n;
    cin>>n;
    vector<string> generate;
    generate_brackets(n,generate,"",0,0);
    for(string s:generate){
        cout<<s<<endl;
    }
    return 0;
}