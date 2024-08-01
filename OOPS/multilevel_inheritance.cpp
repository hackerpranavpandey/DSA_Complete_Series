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
    Student(string a,int b, int c, int d):Human(a,b,c){
        this->name=a;
        this->weight=b;
        this->roll_number=c;
        this->fees=d;
        cout<<"Student constructor"<<endl;
    }
    ~Student(){
        cout<<"Student destructor called"<<endl;
    }
};
class Topper: public Student{
    public:
    int marks;
    Topper(string a,int b,int c,int d,int e):Student(a,b,c,d){
        this->name=a;
        this->weight=b;
        this->roll_number=c;
        this->fees=d;
        this->marks=e;
        cout<<"Topper constructor"<<endl;
    }
};
int main(){
    Topper t("John Doe", 18, 02,100004,99); // call first parent constructor but first child destructor
    cout<<"Name: "<<t.name<<endl;
    cout<<"Roll Number: "<<t.roll_number<<endl;
    cout<<"Fees: "<<t.fees<<endl;
    return 0;
}