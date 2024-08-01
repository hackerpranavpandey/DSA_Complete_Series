// in this file deletion of node with given value is executed
// here using hte value node deletion is done we can also do it using position
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
    // destructor
    ~Node(){
        if(this->next != NULL) {
                delete next;
                this->next=NULL;
        }
    }
};
void InsertAtHead(Node* &head,int d){
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
        cout<<"inserted at head value "<<d<<endl;
}
void InsertAtTail(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;
        cout<<"inserted at tail value "<<d<<endl;
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
        cout<<"inserted at position "<<position<<" "<<d<<endl;
}
void DeleteWithValue(Node* &head,Node* &tail,int value){
            // if head is NULL
            if(head==NULL){
                cout<<"List is empty";
                return;
            }
            //deleting first or start node
            else if(value==head->data){
                Node* temp=head;
                head=head->next;
                // free space in memory
                temp->next=NULL;
                delete temp;
                cout<<"Node is deleted with value "<<value<<endl;
                return;
            }
            else{
                    // just using two pinter 
                    Node* curr=head;
                    Node* prev=NULL;
                    while(curr->data!=value){
                                prev=curr;
                                curr=curr->next;
                                //if value is not present
                                if(curr==NULL){
                                        cout<<"Not found "<<value<<endl;
                                         return;
                    }
                    }
                    prev->next=curr->next;
                    curr->next=NULL;
                    cout<<"Node is deleted with value "<<value<<endl;
                    delete curr;
                    // for last node tail pointer has to be updated
                    if(prev->next==NULL){
                        tail=prev;
                    }
            }
}
void print(Node* &head){
    Node* temp=head;
    if(head==NULL) {
        cout<<"Linked list is empty"<<endl;
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
        Node* node1= new Node(10);
        Node* head=node1;
        Node* tail=node1;
        print(head);
        // deleting value not present
        DeleteWithValue(head,tail,20);
        cout<<"head->"<<head->data<<endl;
        cout<<"tail->"<<tail->data<<endl;
        // inserting at beginning
        InsertAtPosition(head,tail,1,20);
        // at any random postion
        InsertAtPosition(head,tail,2,100);
        // at end inserting we should update the tail pointer
        InsertAtPosition(head,tail,4,2);
        print(head);
        cout<<"head->"<<head->data<<endl;
        cout<<"tail->"<<tail->data<<endl;
        DeleteWithValue(head,tail,20);
        DeleteWithValue(head,tail,100);
        DeleteWithValue(head,tail,4);
        cout<<"After deleting few nodes:"<<endl;
        cout<<"head->"<<head->data<<endl;
        cout<<"tail->"<<tail->data<<endl;
        print(head);
        return 0;
}