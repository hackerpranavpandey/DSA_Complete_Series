// in object oriented programming language basically things move around object
#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    string name;
    int health;
    int level;
}; 
class IIT{
    // empty
};
int main(){
    Hero h1;
    IIT Dh;
    cout<<"Size : "<<sizeof(h1)<<endl;
    // strange as size of empty class should have been 0 but it is 1 reason is to track and identification
    cout<<"Size of empty class :"<<sizeof(Dh)<<endl;
    h1.name="Hello";
    h1.health=100;
    h1.level=3;
    cout<<"name is:"<<h1.name<<endl;
    cout<<"health is:"<<h1.health<<endl;
    cout<<"level is:"<<h1.level<<endl;
    return 0;
}
