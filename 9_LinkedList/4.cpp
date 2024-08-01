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
void InsertAtHead(Node* &head,int d){
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
}
void InsertAtTail(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;
}
void InsertAtPosition(Node* &head,Node* &tail,int position,int d){
        Node* temp=head;
        //for position 1 special case
        if(position==1){
                InsertAtHead(head,d);
                return;
        }
        int cnt=1;
        while(cnt<position-1){
            temp=temp->next;
            cnt++;
        }
        //at end of linked list we need to update the tail pointer also
        if(temp->next==NULL){
            InsertAtTail(tail,d);
            return;
        }
        Node* newNode= new Node(d);
        newNode->next=temp->next;
        temp->next=newNode;
}
void print(Node* head){
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
        // inserting at beginning
        InsertAtPosition(head,tail,1,20);
        // at any random postion
        InsertAtPosition(head,tail,2,100);
        // at end inserting we should update the tail pointer
        InsertAtPosition(head,tail,4,1000);
        print(head);
        return 0;
}