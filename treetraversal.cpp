#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/
void inorder(BinaryTreeNode<int> *root, vector<int> &output) {
  if (root == NULL) {
  return;}
  inorder(root->left, output);
  output.push_back(root->data);
  inorder(root->right, output);
}
void preorder(BinaryTreeNode<int> *root, vector<int> &output) {
  if (root == NULL) {
  return;}
  output.push_back(root->data);
  preorder(root->left, output);
  preorder(root->right, output);
}
void postorder(BinaryTreeNode<int> *root, vector<int> &output) {
  if (root == NULL) {
  return;}
  postorder(root->left, output);
  postorder(root->right, output);
  output.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>ans1;
    vector<int> ans2;
    vector<int> ans3;
    inorder(root, ans1);
    preorder(root,ans2);
    postorder(root, ans3);
    ans.push_back(ans1);
    ans.push_back(ans2);
    ans.push_back(ans3);

    return ans;
}
