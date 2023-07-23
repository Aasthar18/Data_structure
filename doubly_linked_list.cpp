#include <iostream>
using namespace std;
 class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int d){
            this->data=d;
            this->prev=NULL;
            this->next=NULL;
        }
        ~Node(){
         int val=this->data;
         if (this->next!=NULL)
         {
            delete next;
            this->next=NULL;
         }
         cout<<"Memory free for node with data "<<val<<endl;
         
        }

 };
 //deleting at positon
void deleteNode(int position,Node* &head,Node* &tail){
    if (position==1)
    {
      Node* temp=head;
      temp->next->prev=NULL;
      head=temp->next;    //shifting head
      temp->next=NULL;
      delete temp;

   }
    else{
        //deleting any middle or last node
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;            
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        // tail=prev;
        
    }
}


 void insertAtHead(Node* &head,Node* &tail,int d){
   //handling if list is empty;
   if(head==NULL){
      Node* temp=new Node(d);
      head=temp;
      tail=temp;
   }
   else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
   }
 }
 void insertAtTail(Node* &head,Node* &tail,int d){
   if(tail==NULL){
      Node* temp=new Node(d);
      head=temp;
      tail=temp;
   }
   Node* temp=new Node(d);
   tail->next=temp;
   temp->prev=tail;
   tail=temp;
 }
 void print(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    

 }
 void insertAtPositoin(Node* &head,Node* &tail,int position,int d){
    if (position==1)
    {
        insertAtHead(head,tail,d);
        return;
    }
    
    Node* temp=head;
    int cnt=1;
    while (cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //inserting at last and updating tail
    if (temp->next==NULL)
    {
        insertAtTail(head,tail,d);
        return;
    }
    

    Node* nodeToInsert=new Node(d);
   nodeToInsert->next=temp->next;
   temp->next->prev=nodeToInsert;
   nodeToInsert->prev=temp;
   temp->next=nodeToInsert;
    
}


 int main(){
   //  Node* node1=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;
    print(head);
    insertAtHead(head,tail,11);
    print(head);
    insertAtHead(head,tail,13);
    print(head);
    insertAtHead(head,tail,18);
    print(head);
    insertAtHead(head,tail,17);
    print(head);
    insertAtTail(head,tail,264);
    print(head);
    insertAtPositoin(head,tail,4,14);
    print(head);
    deleteNode(3,head,tail);
    print(head);
    // cout<<"head= "<<head->data<<endl;
    // cout<<"tail= "<<tail->data;
    return 0;
 }