#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
    char ch;
    int health;
    int a;
    public:
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health=h;
    }
}; 
int main(){
    // static allocation 
    Hero a;
    cout<<"Health is:"<<a.getHealth()<<endl;
    a.setHealth(120);
    cout<<"Health is:"<<a.getHealth()<<endl;
    // dynamic allocation
    Hero *b=new Hero;
    cout<<"Health is:"<<b->getHealth()<<endl;
    (*b).setHealth(70);
    cout<<"Health is:"<<b->getHealth()<<endl;
    // cout<<b<<endl;
    // cout<<(&b);
    return 0;
}