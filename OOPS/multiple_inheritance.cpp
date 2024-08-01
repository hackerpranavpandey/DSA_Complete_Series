#include<bits/stdc++.h>
using namespace std;
class Youtube{
    public:
    string name;
    int income;
    Youtube(string a,int b){
        this->name=a;
        this->income=b;
    }
    void tell(){
        cout<<this->name<<endl;
        cout<<this->income<<endl;
    }
};
class Teacher{
    public:
    string department;
    Teacher(string c){
        this->department=c;
    }
    void display(){
        cout<<this->department<<endl;
    }
};
class Person:public Youtube,public Teacher{
    public:
    string expertize;
    Person(string a,int b,string c,string expertize):Youtube(a,b),Teacher(c){
        this->name=a;
        this->income=b;
        this->department=c;
        this->expertize=expertize;
    }
};
int main(){
    Person T1("Rohit",1000000,"CSE","Coding");
    T1.tell();
    T1.display();
    return 0;
}