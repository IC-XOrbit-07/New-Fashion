#include<iostream>
#include<queue>
using namespace std;

class Node{
  public:
    int data;
    Node* right;
    Node* left;

    Node(int data){
      this->data = data;
      this->right = NULL;
      this->left = NULL;
    }
};

Node* insertIntoBST(Node* root , int data){
  if(root == NULL){
    root = new Node(data);
    return root;
  }
  if(root->data > data){
    root->left = insertIntoBST(root->left , data);
  }
  else{
    root->right = insertIntoBST(root->right , data);
  }
  return root;
}

void levelordertraversal(Node* root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    // Step 1
    Node* temp = q.front();

    // Step 2
    q.pop();
    if(temp==NULL){
      cout<<endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      // Step 3
      cout<<temp->data<<" ";

      // Step 4
      if(temp->left){
        q.push(temp->left);
      }
      if(temp->right){
        q.push(temp->right);
      }
    }
  }
}

void takeinput(Node* &root){
  int data;
  cin>>data;
  while(data!=-1){
    root = insertIntoBST(root , data);
    cin>>data;
  }
}

bool findNodeInBST(Node* root , int element){
  if(root == NULL){
    return false;
  }
  if(root->data == element){
    return true;
  }
  if(element > root->data){
    return findNodeInBST(root->right , element);
  }
  else{
    return findNodeInBST(root->left , element);
  }
}

int main(){ 
  Node* root = NULL;
  cout<<"Enter the data for the node "<<endl;
  takeinput(root);
  levelordertraversal(root); 
  bool ans  = findNodeInBST(root , 10);
  cout<<ans;
}