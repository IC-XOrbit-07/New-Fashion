#include <iostream>
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
  cout<<"Enter the data";
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

int main() {
  Node* root = NULL;
  root = buildtree();
  return 0;
}