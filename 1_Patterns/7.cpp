// E
// D E
// C D E
// B C D E
// A B C D E
#include<bits/stdc++.h>
int main(){
    int n;
    // without using namespace std above we need to use std before input and output operations
    std::cin>>n;
    for(int i=1;i<=n;i++){
            char c='A'+n-i;
            for(int j=1;j<=i;j++){
                std::cout<<c;
                c+=1;
            }
            std::cout<<"\n";
    }
    return 0;
}