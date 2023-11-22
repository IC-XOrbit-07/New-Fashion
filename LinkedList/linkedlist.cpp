#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(){
            this->data=0;
            this->next=NULL;
        }
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

void insertAtHead(Node* &head ,Node* &tail, int data){
    if(head==NULL){
        Node* new_node = new Node(data);
        head = new_node;
        tail = new_node;
        return;
    }
    // Step1 :- Create a node
    Node* new_node = new Node(data);
    // Step2 :- Attach new node next with head value address
    new_node->next = head;
    // Step3 :- make head pervious
    head = new_node;
}


void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

void insertAtTail(Node* &head , Node* &tail , int data){
    if(head==NULL){
        Node* new_node = new Node(data);
        head = new_node;
        tail = new_node;
        return;
    }
    // Step1:- Create a Node which is to be inserted
    Node* new_node = new Node(data);
    // Step2:- make tail which point towards the newdata addres of value field
    tail->next = new_node;
    // Step3:- make tail to the new one
    tail = new_node;
}

int main(){
    // We have made a node in which next pointer of that node is set to be NULL
    // Node* head = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);

    insertAtTail(head,tail,77);
    
    print(head);
    return 0;
}