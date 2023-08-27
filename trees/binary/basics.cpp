#include <iostream>
#include <queue>
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

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node* root){
    // int count = 0;
    // base case
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    // if(root->left && root->right == NULL){
    //     count++;
    // }
    inorder(root->right);
    // cout << count<< endl;
}

void preorder(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(Node* &root){
    queue<Node*> q;
    cout << "Enter data for root: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " <<temp->data << endl;
        int leftData;
        cin >> leftData;
        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " <<temp->data << endl;
        int rightData;
        cin >> rightData;
        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }

    
};

int main()
{
    Node *root = NULL;
    // Creating a tree -> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);

    // levelorder
    cout << "Printing in level traversal: " << endl;
    levelOrderTraversal(root);

    // inorder
    cout << "Inorder traversal: " << endl;
    inorder(root);
    cout << endl;
 
    // preorder
    cout << "Preorder traversal: " << endl;
    preorder(root);
    cout << endl;

    // postorder
    cout << "Postorder traversal: " << endl;
    postorder(root);
    cout << endl;

    buildFromLevelOrder(root);
}