#include <iostream>
#include <queue>
using namespace std;


class Node{
  public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
      this->data = data;
      left = NULL;
      right = NULL;
    }
};

Node* buildtree(){
  int data;
  cout<<"Enter the data"<<endl;
  cin>>data;

  if(data==-1){
    return NULL;
  }
  Node* root = new Node(data);
  cout<<"Enter data for left part of "<<data<<"node"<<endl;

  root->left = buildtree();

  cout<<"Enter data for left part of "<<data<<"node"<<endl;
  root->right = buildtree();

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

void inorderTraversal(Node* root){
  if(root==NULL){
    return ;
  }
  inorderTraversal(root->left);

  cout<<root->data<<" ";

  inorderTraversal(root->right);
  // cout<<endl;
}

void preorderTraversal(Node *root){
  if(root==NULL){
    return ;
  }
  cout<<root->data<<" ";
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

void postorderTraversal(Node *root){
  if(root==NULL){
    return ;
  }
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  cout<<root->data<<" ";
}

int height(Node* root){
  if(root == NULL){
    return 0;
  }
  int leftHeight = height(root->left);
  int rightHeight = height(root->right);
  return max(leftHeight+1,rightHeight+1);
}
int main() {
  Node* root = NULL;
  root = buildtree();
  levelordertraversal(root);
  inorderTraversal(root);
  cout<<endl;
  preorderTraversal(root);
  cout<<endl;
  postorderTraversal(root);
  int height_of_tree = height(root);
  cout<<endl;
  cout<<"Height of tree is "<<height_of_tree;
  return 0;
}