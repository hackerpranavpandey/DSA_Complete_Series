// here using getter and setter method to access outside class
#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
    int level;
    int health;
    public:
    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(int l){
        level=l;
    }
};
int main(){
    Hero h1;
    cout<<"h1 health is :"<<h1.getHealth()<<endl;
    h1.setHealth(70);
    cout<<"Now the health is :"<<h1.getHealth()<<endl;
    return 0;
}
