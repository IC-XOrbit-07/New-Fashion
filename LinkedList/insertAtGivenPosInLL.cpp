#include<iostream>
#include<limits>
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

int getLengthofLL(Node* &head){
    int length =0;
    Node* temp = head; 
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtPosition(int position , int data , Node* &head , Node* &tail){
    if(head==NULL){
        Node* new_node = new Node(data);
        head = new_node;
        tail = new_node;
        return;
    }

    // Step1: Find previous pointer and current pointer
    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }

    int length = getLengthofLL(head);

    if(position >= length){
        insertAtTail(head,tail,data);
        return;
    }

    int i=1;
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    // Step2: Creating new node 
    Node* new_node = new Node(data);

    // Step3: Linking Phase
    new_node->next = curr;
    prev->next = new_node;
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

    insertAtPosition(60,INT_MAX,head,tail);

    print(head);
    return 0;
}