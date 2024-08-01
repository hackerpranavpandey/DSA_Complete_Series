// here double linked list insertion is done starting with empty list
// insertion at head,any position ,tail
// getlength to get length of linked list
// deletion different cases at start , any mid position or end 
// different updation cases are also there
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    // constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    // destructor
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};
// traversing a linked list
void print(Node* head){
        // while printing empty list
        if(head==NULL)
                cout<<"linked list is empty"<<endl;
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
}
// gives length of linked list
int getLength(Node* head){
        Node* temp=head;
        int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt+=1;
        }
        return cnt;
}
void InsertAtHead(Node* &head,Node* &tail,int data){
        if(head==NULL){
            Node* temp=new Node(data);
            head=temp;
            tail=temp;
        }
        else{
                Node* newNode=new Node(data);
                newNode->next=head;
                head->prev=newNode;
                head=newNode;
        }
}
void InsertAtTail(Node* &tail,Node* &head,int d){
        if(head==NULL){
            Node* temp=new Node(d);
            head=temp;
            tail=temp;
        }
        else{
                Node* newNode=new Node(d);
                tail->next=newNode;
                newNode->prev=tail;
                tail=newNode;
        }
}
void InsertAtPosition(Node* &head,Node* &tail,int position,int data){
        // insertion at start node
        if(position==1){
            InsertAtHead(head,tail,data);
            return;
        }
        // insert at end of list
        else if(position==getLength(head)+1){
            InsertAtTail(tail,head,data);
            return;
        }
        else{
            Node* temp=head;
            int cnt=1;
            while(cnt<position-1){
                temp=temp->next;
                cnt++;
            }
            Node* newNode=new Node(data);
            newNode->prev=temp;
            newNode->next=temp->next;
            temp->next->prev=newNode;
            temp->next=newNode;
        }
}
void deleteAtPosition(Node* &head,Node* &tail,int position){
    if(position==1){
        Node* temp=head;
        head->next->prev=NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        // using two pointer approach 
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        // for last node deletion updating tail
        if(curr->next==NULL){
                tail=curr->prev;
                prev->next=NULL;
                curr->prev=NULL;
                curr->next=NULL;
                delete curr;

        }
        // for any mid postion
        else{
                prev->next=curr->next;
                curr->next->prev=prev;
                curr->prev=NULL;
                curr->next=NULL;
                delete curr;
        }

    }
}
int main(){

        Node* head=NULL;
        Node* tail=NULL;
       // cout<<"head-> "<<head->data<<endl;
        print(head);
        // inserting at head or start
        InsertAtHead(head,tail,20);
        print(head);
        cout<<"head-> "<<head->data<<endl;
        InsertAtHead(head,tail,30);
        print(head);
        cout<<"head-> "<<head->data<<endl;
        InsertAtHead(head,tail,40);
        print(head);
        cout<<"head-> "<<head->data<<endl;
        cout<<"tail -> "<<tail->data<<endl;
        InsertAtHead(head,tail,50);
        print(head);
        cout<<"head-> "<<head->data<<endl;
        // inserting at end or last
        InsertAtTail(tail,head,25);
        print(head);
        cout<<"tail -> "<<tail->data<<endl;
        InsertAtTail(tail,head,12);
        print(head);
        cout<<"tail -> "<<tail->data<<endl;
        // inserting at any given position
        InsertAtPosition(head,tail,3,200);
        print(head);
        // at head
        InsertAtPosition(head,tail,1,120);
        print(head);
        cout<<"head-> "<<head->data<<endl;
        cout<<"tail -> "<<tail->data<<endl;
        // at tail
        InsertAtPosition(head,tail,getLength(head)+1,1200);
        print(head);
        cout<<"head-> "<<head->data<<endl;
        cout<<"tail -> "<<tail->data<<endl;
        // at tail-1
        InsertAtPosition(head,tail,getLength(head),7);
        print(head);
        cout<<"head-> "<<head->data<<endl;
        cout<<"tail -> "<<tail->data<<endl;
        deleteAtPosition(head,tail,1);
        print(head);
        cout<<"head-> "<<head->data<<endl;
        deleteAtPosition(head,tail,4);
        print(head);
        cout<<"head-> "<<head->data<<endl;
        cout<<"tail -> "<<tail->data<<endl;
        deleteAtPosition(head,tail,getLength(head));
        print(head);
        cout<<"tail -> "<<tail->data<<endl;
        return 0;
}