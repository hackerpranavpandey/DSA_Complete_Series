// circular single linked list
// using only tail pointer no head
// as tail->next points to first node
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data=d;
        this->next=NULL ;
    }
    // destructor
    ~Node(){
        int value=this->data;
        if(this->next=NULL){
                delete next;
                next=NULL;
        }
        cout<<"node is deleted with value"<<value<<endl;
    }
};
// element is that value after which node is to be inserted
void insertNode(Node* &tail,int element,int d){
        // empty list
        if(tail==NULL){
            Node* newNode=new Node(d);
            tail=newNode;
            newNode->next=newNode;
        }
        else{
            Node* curr=tail->next;
            while(curr->data!=element){
                curr=curr->next;
            }
            Node* temp=new Node(d);
            temp->next=curr->next;
            curr->next=temp;
            // for insertion at last
            if(curr==tail){
                tail=temp;
            }
        }
}

void deleteNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    else{
        Node* curr=tail->next;
        Node* prev=NULL;
        while(curr->data!=value){
                prev=curr;
                curr=curr->next;
        }
        // only one node and deleting that
        if(prev==NULL && tail->data==value){
            
            tail=NULL;
            curr->next=NULL;
            delete curr;
            
        }
        // more than one node is present and deleting that
        else if(prev==NULL){
                    tail->next=curr->next;
                    curr->next=NULL;
                    delete curr;
        }

        else{

            prev->next=curr->next;
            curr->next=NULL;
            if(tail==curr){
            tail=prev;
        }
            delete curr;

        }

    }

}

void print(Node* tail){
    if(tail==NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        Node* temp=tail->next;
        while(temp->data!=tail->data){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<tail->data<<endl;
    }
}

int main(){

    Node* tail=NULL;
    // inserting in empty list
    insertNode(tail,5,3);
    print(tail);



    deleteNode(tail,3);
    print(tail);
    // cout<<tail->data<<endl;

    return 0;
}