// if binary tree is balanced 

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;
    return ans;
}

bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }

    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);

    bool diff = abs(height(root->left) - height(root->right)) <=1;

    if(left && right && diff){
        return 1;
    }
    else{
        return false;
    }
}

pair<bool, int> isBalancedFast(Node* root){
    if(root == NULL){
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    pair<bool, int> left = isBalancedFast(root->left);
    pair<bool, int> right = isBalancedFast(root->right);


    bool leftAns = left.first;
    bool rightAns = right.first;

    bool diff = abs(left.second - right.second) <=1;

    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1;
    
    if(leftAns && rightAns && diff){
        ans.first = true;
    }
    else{
        ans.first = false;
    }

    return ans;
}

int main()
{
    Node *root = NULL;
    // Creating a tree -> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);

    pair<bool, int> finalAns = isBalancedFast(root);
    if(finalAns.first){
        cout << "The tree is balanced"<< endl;
    }
    else{
        cout << "The tree is not balanced" << endl;
    }

    cout << "The height of the tree is: " << finalAns.second << endl;

}

// 1 10 5 -1 -1 -1 -> Not balanced 
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 -> balanced