// copy constructor concept here
#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    char level;
    int health;
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health=h;
    }
    // constructor
    Hero(){
        cout<<"Constructor Called"<<endl; 
    }
    // copy constructor
    Hero(Hero& temp){
        cout<<"Copy constructor is called"<<endl;
        this->health=temp.health+100;
        this->level=temp.level;
    }
}; 
int main(){
    // static allocation 
   Hero a;
   a.level='p';
   a.health=70;
   // this is due to default copy constructor now we will use our own copy constructor for this purpose
   // Hero b(a);
   // dynamic allocation
   // so when we define any constructor it automatically remove the default constructor it had build initially
    Hero b(a);
    cout<<"health of b is:"<<b.health<<endl;
    cout<<"level of b is:"<<b.level<<endl;
}