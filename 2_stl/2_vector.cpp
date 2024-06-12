// this file will help me know vector data type in more details
// when we don't know the size of data structure then we use vector
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.emplace_back(20);
    v.push_back(30);
    // there is some difference between push and emplace in terms of syntax 
    vector<pair<int,int>> v2;
    v2.push_back({1,2});
    // no bracket required while using emplace
    v2.emplace_back(3,4);
    // to declare a vector of fixed sizes with some predefined values
    vector<int> v3(10,0);
    // if we want to make a copy of vector to another vector
    vector<int> v4(v3);
    // so v4 is not same as v3 but the copy of v3
    cout<<v4.at(1)<<endl;
    // simple way to access any element in the vector is through its index like v[0] or v.at(0)
    // however there is iterator using which we can access any vector element
    // iterator points to memory address
    vector<int>::iterator it=v.begin();
    // it here points to address for begin of vector v
    it++; // points to address of 20
    cout<<*it<<endl;
    // vector<int>::iterator it=v.end(); this will point to address after 30
    // vector<int>::iterator it=v.rend(); this will point to address befor 10
    // vector<int>::iterator it=v.rbegin(); will point to end of v
    // in order to print a vector
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    // writing all the time vector<int is not feasible 
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    for(auto it:v){
        cout<<it<<endl;
    }
    // now we will learn how to delete any element
    v.erase(v.begin()+1); // will erase 20 as v={10,20,30}
    cout<<*(v.begin()+1)<<endl;
    v.erase(v.begin()+1,v.begin()+2);
    // so we can erase continuous values in vector
    
    // Insert functions
    vector<int> v5(2,100); //{100,100}
    v5.insert(v5.begin(),300); // {300,100,100}
    v5.insert(v5.begin()+1,2,10); // {300,10,10,100,100}

    vector<int> copy(2,50);
    v5.insert(v5.begin(),copy.begin(),copy.end());

    cout<<v5.size()<<endl;

    v5.pop_back(); // will delete last entry

    v.swap(v5); // swap value of v and v5
    
    v.clear(); // to erase entire vector v
    cout<<v.empty()<<endl; // gives 1 if empty else 0
    v.insert(v.begin(),10); // one way to insert in front of a vector
    return 0;
}