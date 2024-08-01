#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int sem;
    public:
    //default constructor
    Student(){
        cout<<"constructor called"<<endl;
    }
    // parameterized constructor
    Student(string name,int roll,int sem){
        (*this).name=name;
        this->roll=roll;
        this->sem=sem;
    }
    // inline constructor
    // inline Student(string a,int b,int c):name(a),roll(b),sem(c){
        
    // }
};
int main(){
    Student *S1=new Student();
    cout<<"the bytes of class student :"<<sizeof(*S1)<<endl;
    Student *S2=new Student("Pranav",220010043,4);
    cout<<"the details are as below of S2"<<endl;
    cout<<(*S2).name<<(*S2).roll<<(*S2).sem<<endl;
    return 0;
}