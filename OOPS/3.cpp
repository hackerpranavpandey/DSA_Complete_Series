// here using getter and setter method to access outside class
#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
    // 8 bytes
    int a;
    char b;
    char c;
    public:
    // int getHealth(){
    //     return health;
    // }
    // void setHealth(int h){
    //     health=h;
    // }
}; 
int main(){
    Hero h1;
    // the reason is memory allignment and padding 
    // Padding: 3 bytes (to align the next member on a 4-byte boundary)
    cout<<sizeof(h1)<<endl;
    return 0;
}