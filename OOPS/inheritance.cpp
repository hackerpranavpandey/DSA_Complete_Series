// concept of inheritance is discussed here
// how to inherit the parent class  property
// all three types of modifiers
#include<bits/stdc++.h>
using namespace std;
class Human{
    public:
    string name;
    private:
    int age;
    protected:
    int weight;
    Human(string name, int age,int weight):name(name),age(age),weight(weight){
        cout<<"Human constructor"<<endl;
    }
    ~Human(){
        cout<<"destructor called"<<endl;
    }
};
class Student: public Human{
    public:
    int roll_number,fees;
    Student(string name, int age, int weight, int roll_number, int fees):Human(name,age,weight){
        cout<<"Student constructor"<<endl;
    }
    ~Student(){
        cout<<"Student destructor called"<<endl;
    }
};
int main(){
    Student s("John Doe", 18, 65,02,100004); // call first parent constructor but first child destructor
    s.roll_number = 12345;
    s.fees = 15000;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll Number: "<<s.roll_number<<endl;
    cout<<"Fees: "<<s.fees<<endl;
    return 0;
}