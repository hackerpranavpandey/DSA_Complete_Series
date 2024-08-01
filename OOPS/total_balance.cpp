// in this file I have created a code that will compute total balance
// present in the bank
#include<bits/stdc++.h>
using namespace std;
class AccountHolder{
    string name;
    int accountNumber;
    static int total_balance;
    // constructor
    public:
    AccountHolder(string a,int b,int c){
        this->name=a;
        this->accountNumber=b;
        total_balance+=c;
    }
    // destructor
    ~AccountHolder(){
        cout<<"Total balance now is :"<<total_balance<<endl;
    }
};
// initialisation of total balance
int AccountHolder:: total_balance=0;
int main(){
    // so everytime a new user is created we update total balance sheet
    AccountHolder *A=new AccountHolder("Ashok",100000,10000);
    delete A; // nee to call the destructor
    AccountHolder B("Rohit",10087,100000);  // here destructor gets called automatically
    return 0; 
}