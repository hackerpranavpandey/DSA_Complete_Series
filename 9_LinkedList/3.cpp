// in this file data will be inserted at end of linked list that is at tail
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
void InsertAtTail(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;
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
        Node* tail=node1;
        print(head);
        InsertAtTail(tail,400);
        InsertAtTail(tail,800);
        InsertAtTail(tail,1000);
        InsertAtTail(tail,40);
        print(head);
        return 0;
}