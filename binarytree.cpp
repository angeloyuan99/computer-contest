#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;
};
void printPostorder(struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
    // first recur on left subtree 
    printPostorder(node->left); 
  
    // then recur on right subtree 
    printPostorder(node->right); 
  
    // now deal with the node 
    cout << node->data << " "; 
} 
  

void printInOrder(struct node* node) 
{ 
    if (node != NULL){
        printInOrder(node->left); 
        cout << node->data << " "; 
        printInOrder(node->right); 
    }
} 



void printPreorder(struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
    cout << node->data << " "; 
  
    printPreorder(node->left);  
  
    printPreorder(node->right); 
} 





/*
    Given a binary tree, return true if a node
    with the target data is found in the tree. Recurs
    down the tree, chooses the left or right
    branch by comparing the target to each node.
*/
int lookup(struct node* node, int target) {
    // 1. Base case == empty tre

    // in that case, the target is not found so return false
    if (node == NULL) {
        return false;
    } else {
        // 2. see if found here
        if (target == node->data){
            return true;
        }
        else {
        // 3. otherwise recur down the correct subtree
            if (target < node->data) return(lookup(node->left, target));
            else return(lookup(node->right, target));
        }
    }
}


/*
 Helper function that allocates a new node
 with the given data and NULL left and right
 pointers.
*/
struct node* NewNode(int data) { struct node* node = new(struct node); // "new" is like "malloc"
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);

}


/*
 Give a binary search tree and a number, inserts a new node
 with the given number in the correct place in the tree.
 Returns the new root pointer which the caller should
 then use (the standard trick to avoid using reference
 parameters).
*/
struct node* insert(struct node* node, int data) {

 // 1. If the tree is empty, return a new, single node
 if (node == NULL) {
 return(NewNode(data));
 }
 else {
    // 2. Otherwise, recur down the tree
    if (data <= node->data) node->left = insert(node->left, data);
    else node->right = insert(node->right, data);
    return(node); // return the (unchanged) node pointer
    }
}
//find the max value
int findMax(node* root)  
{  
    // Base case  
    if (root == NULL)  
    return INT_MIN;  
  
    // Return maximum of 3 values:  
    // 1) Root's data 2) Max in Left Subtree  
    // 3) Max in right subtree  
    int res = root->data;  
    int lres = findMax(root->left);  
    int rres = findMax(root->right);  
    if (lres > res)  
    res = lres;  
    if (rres > res)  
    res = rres;  
    return res;  
}
int findMin(struct node* root) 
{ 
    // Base case 
    if (root == NULL) 
      return INT_MAX; 
  
    // Return minimum of 3 values: 
    // 1) Root's data 2) Max in Left Subtree 
    // 3) Max in right subtree 
    int res = root->data; 
    int lres = findMin(root->left); 
    int rres = findMin(root->right); 
    if (lres < res) 
      res = lres; 
    if (rres < res) 
      res = rres; 
    return res; 
} 
int maxDepth(node* node)  {  
    if (node == NULL)  
        return 0;  
    else
    {  
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);  
        int rDepth = maxDepth(node->right);  
      
        /* use the larger one */
        if (lDepth > rDepth)  
            return(lDepth + 1);  
        else return(rDepth + 1);  
    }  
}
int main(){
    struct node* root = NULL;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 3);
    root = insert(root, 4);
    printPostorder(root);
    cout << "\n";
    return 0;
}