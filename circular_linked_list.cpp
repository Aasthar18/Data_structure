#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        //constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
        //destructor
        ~Node(){
            int value=this->data;
            //memory free
            if(this->next!=NULL){
                delete next;
                this->next=NULL;
            }
        cout<<"Memory is free for Node with data "<<value
        <<endl;
        }
        
};

void insertNode(Node* &tail,int element,int d){
    //assuming that the element is present in the list
    
    //empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;  //making circular
        
    }

    //non - empty list
    else{
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }

        //element found
        //curr is representing element wala node
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

//traversal
void print(Node* &tail){
    Node* temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
    
}

int main(){
    Node* tail=NULL;
    insertNode(tail,3,2);
    print(tail);
    insertNode(tail,2,3);
    print(tail);
    insertNode(tail,3,4);
    print(tail);
    insertNode(tail,4,6);
    print(tail);
    insertNode(tail,6,7);
    print(tail);
    insertNode(tail,7,8);
    print(tail);
    insertNode(tail,8,9);
    print(tail);
    insertNode(tail,4,5);
    print(tail);

}






