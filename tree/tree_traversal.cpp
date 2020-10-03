# include <iostream>
# include "create_tree.h"
using namespace std;


void preOrder(Node* root){
  if(root==nullptr){
    return;
  }
  cout << root->data <<"->";
  preOrder(root->left_child);
  preOrder(root->right_child);
}

void inOrder(Node* root){
  if (root==nullptr)
    return;
  inOrder(root->left_child);
  cout << root->data <<"->";
  inOrder(root->right_child);
}

void postOrder(Node* root){
  if(root==nullptr)
    return;
  postOrder(root->left_child);
  postOrder(root->right_child);
  cout << root->data <<"->" ;
}

int main(){
  create_tree tree;
  Node* root=new Node;
  tree.add_root(&root,89);
  tree.add_node(root,78);
  tree.add_node(root,36);
  tree.add_node(root,14);
  tree.add_node(root,12);
  tree.add_node(root,54);
  tree.add_node(root,23);
  tree.add_node(root,108);
  tree.add_node(root,95);
  tree.add_node(root,67);
  preOrder(root);
  cout << "null" << '\n';
  postOrder(root);
  cout << "null" << '\n';
  inOrder(root);
  cout << "null" << '\n';

}
