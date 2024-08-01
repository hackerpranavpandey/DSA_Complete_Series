// static keyword 
//  no need to create object to access
#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    char ch;
    int health;
    // static datatype
    static int timeToComplete;
    // static function
    static int hello(){
        return timeToComplete;
    }
    void setHealth(int h){
        health=h;
    }
};
// datatype classname::(scope resolution operator)filedNme=Value;
int Hero::timeToComplete=1;
int main(){
    cout<<Hero::hello();
    return 0;
}