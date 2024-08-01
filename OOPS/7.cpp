//shallow and deep copy is here
/// default copy constructor do shallow copy which just use to access the address with two different name 
// so there is default constructor , copy constructor that get destroyed when we define our own constructor and copy constructor for them
// wheras deep copy is such that it create copy for new object  
#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    char* name;
    int health;
    // defining own constructor here
    Hero() {
        name=new char[10];
    }
    // copy constructor this will do deep copy which means that when a name is changed it will not change b name which is copy of a
    // Hero(Hero& temp){
    //     char *ch=new char[strlen(temp.name)+1];
    //     strcpy(ch,temp.name);
    //     this->name=ch;
    // }
}; 
int main(){
    // static allocation
    Hero a;
    a.name="Hello";
    a.health=70;
    // copy of a static
    Hero c=a;
    // dynamically copying a into name b
    Hero *b=new Hero(a);
    cout<<"name of c is:"<<c.name<<endl;
    cout<<"name of b is:"<<b->name<<endl;
    a.name="hey";
    cout<<"new name for b is:"<<b->name<<endl;
    cout<<"new name for c is:"<<c.name<<endl;
    return 0;
}