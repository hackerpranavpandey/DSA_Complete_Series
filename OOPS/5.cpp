#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
    char level;
    int health;
    int a;
    public:
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
    // so this constructor takes parameter
    Hero(int health){
        // so this keyword help us to access the address of current object and then  -> assigns the value to that address 
        cout<<"this->"<<this<<endl;
        this->health=health;
    }
}; 
int main(){
    // static allocation 
    Hero a(10);
    cout<<"address of a:"<<&a<<endl;
    cout<<a.getHealth()<<endl;
    // here that constructor will be called which does not take any parameter
    Hero *b= new Hero;
    return 0;
}