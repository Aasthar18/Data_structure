#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int val){
        this->data=val;
        this->next=NULL;
    }
};
//add at head
void addathead(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
    }
    else{
    n->next=head;
    head=n;
    }
}
//insert at tail
void addtotail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void fun( node *head){
    node *p=head;
    if(p==NULL)
    return;
    fun(p->next->next);
    cout<<p->data+1;
}
int main(){
    node* head=NULL;
    // addathead(head,1);
    // addathead(head,2);
    // addathead(head,3);
    addtotail(head,6);
    addtotail(head,4);
     addtotail(head,3);
    addtotail(head,1);
     addtotail(head,2);
    addtotail(head,7);
    display(head);
    fun(head);
    display(head);
}