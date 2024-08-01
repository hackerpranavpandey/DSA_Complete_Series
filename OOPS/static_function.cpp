// here we will use static member function
// helps to access static data of class without using any object
#include<bits/stdc++.h>
using namespace std;
class AccountHolder{
    string name;
    int accountNumber;
    static int total_balance;
    public:
    // just simple to use and work with them
    static void balance(){
        cout<<"Total Balance: "<<total_balance<<endl;
    }
    AccountHolder(string a,int b,int c){
        this->name=a;
        this->accountNumber=b;
        total_balance+=c;
    }
};
int AccountHolder:: total_balance=0;
int main(){
    // lets see total amount initially
    AccountHolder::balance();
    AccountHolder *A=new AccountHolder("Ashok",100000,10000);
    delete A;
    AccountHolder B("Rohit",10087,100000);
    // now we can acesss static function
    AccountHolder::balance();
    return 0; 
}