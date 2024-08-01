// in this file we will know how to use class for linked list
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    // constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
int main(){
        // Node* node1= new Node(10);
        Node node1(10);
        cout<< node1.data << endl;
        cout<< node1.next << endl;
        return 0;
}