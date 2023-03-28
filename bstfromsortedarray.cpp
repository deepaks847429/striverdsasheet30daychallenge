#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

/*TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    if (n == 0) {
    return NULL;
    }
    int start=0;
    int size=n-1;
    int mid=(start+size)/2;
    TreeNode<int>* root= new TreeNode<int>(arr[mid]);
    root->left=sortedArrToBST(arr, mid);
    root->right=sortedArrToBST(arr[mid+1], n-mid-1);
    return root;
}*/
/*TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    if (n == 0) {
        return NULL;
    }
    int start=0;
    int size=n-1;
    int mid=(start+size)/2;
    TreeNode<int>* root= new TreeNode<int>(arr[mid]);
    root->left=sortedArrToBST(arr, mid);
    root->right=sortedArrToBST(arr[mid+1], n-mid-1);
    return root;
}*/
TreeNode<int> *solve(vector<int> &arr, int end, int start) {
  if (start > end) {
      return NULL;
  }
  int mid=(start+end)/2;
  TreeNode<int>* root=new TreeNode<int>(arr[mid]);
  root->left=solve(arr,mid-1, start);
  root->right=solve(arr, end, mid+1);
  return root;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    return solve(arr, n-1, 0);
}


