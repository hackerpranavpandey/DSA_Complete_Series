// destructor is discussed here 
#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    int health;
    int level;
    Hero(){
        cout<<"Constructor is called"<<endl;
    }
    // destructor
    ~Hero(){
        cout<<"destructor is called here"<<health<<endl;
    }
}; 
int main(){
    // static allocation  
    Hero a;
    a.health=100;
    // for dynamic allocated object we have to call destructor
    Hero *b=new Hero;
    b->health=120;
    // so we have to call the destructor manually
    delete b; // it not called by default
    return 0;
}