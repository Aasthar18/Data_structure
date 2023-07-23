#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        this ->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memeory free for the node"<<value<<endl;
    }

};




void insertathead(node *&head,int d){
    node *n=new node(d);
    if(head==NULL){
        head=n;
        n->next=head;
        return;
    }
    node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;


}
void insertattail(node *&head,int d){
    node *n=new node(d);
    if(head==NULL){
        insertathead(head,d);
        return;
    }
    node *temp= head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}




void print(node *head){
    node *temp=head;
     do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
       cout<<"head"<<endl;
}




int main(){
    node*head=NULL;
    node *tail=NULL;
    insertathead(head,1);
    print(head);
    insertathead(head,3);
    print(head);
    insertathead(head,5);
    print(head);
    insertattail(head,6);
    print(head);

}