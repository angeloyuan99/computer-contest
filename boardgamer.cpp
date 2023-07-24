#include <iostream>
#include <vector>
using namespace std;
struct BTreeNode {    
    string name;
    BTreeNode *left;
    BTreeNode *right;
    BTreeNode *parent;
    BTreeNode(string name) {
        this->name = name;
        this->left = NULL;
        this->right = NULL;
        this->parent = NULL;
    }
};
void addChild(BTreeNode *parent, BTreeNode *child) {  
    if(parent->right == NULL) {
        parent->right = child;
    } else  {
        parent->left = child;
    }
    child->parent = parent;
}
int BTreeDepth(BTreeNode *node) {
    int depth = 0;
    while(node->parent != NULL) {
        depth++;
        node = node->parent;
    }
    return depth;
}
int maxBTreeDepth(BTreeNode *node)
{
    if (node==NULL)
        return -1;
    else
    {
        int lDepth = maxBTreeDepth(node->left);
        int rDepth = maxBTreeDepth(node->right);
        if (lDepth > rDepth) return(lDepth+1);
        else return(rDepth+1);
    }
}
void printBTree(BTreeNode* node) {
    int depth = BTreeDepth(node);
    cout << string(depth*3, ' ') << node->name<<endl;
    if(node->right != NULL) {
        printBTree(node->right);
    }
    if(node->left != NULL) {   
        printBTree(node->left);
    }
}
int main() {
    //    sample();
    int tests;
    cin>>tests;
    for(int t = 0; t < tests; t++){
        int names;
        string name;
        cin>>names;
        vector<string> messages;
        for(int i = 0; i < names; i++){
            cin>>name;
            messages.push_back(name);
        }
        BTreeNode root(*(messages.end() - 1));
        BTreeNode *current = &root;
        for(vector<string>::iterator it = messages.begin(); it != messages.end(); it++) {
            string nodeName = *it;   
            bool isParent = false;
            if(current->parent != NULL && current->parent->name == nodeName) {
                isParent = true;
            }
            if(isParent) {   
                current = current->parent;
            } else {
                BTreeNode* child = new BTreeNode(nodeName);
                addChild(current, child);
                current = child;
            }
        }
        int maxDepth = maxBTreeDepth(&root);
        int newTime = maxDepth * 2 * 10;
        int oldTime = messages.size() * 10;
        cout <<(oldTime - newTime)<< endl;
    }
}
