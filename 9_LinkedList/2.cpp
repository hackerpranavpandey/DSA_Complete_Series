// inserting element at head of linked list
// one small thing to remember in linked list while passing any pointer to any function
// In summary, the key difference is in how changes to the pointer itself are handled. 
// Passing by reference (Node* &head) allows modifications to the original pointer 
// outside the function, while passing by value (Node* head) does not
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void InsertAtHead(Node* &head,int d){
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
        Node* node1= new Node(10);
        Node* head=node1;
        print(head);
        InsertAtHead(head,200);
        print(head);
        return 0;
}