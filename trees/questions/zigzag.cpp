// height of binary tree

#include <iostream>
#include <vector>
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

vector <int> zigzag(Node* root){
    vector<int> result;
    if(root == NULL){
        return result;
    }

    queue<Node*> q;
    q.push(root);

    bool left_right = true;

    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);
        for (int i = 0; i < size; i++)
        {
            Node* frontNode = q.front();
            q.pop();
            int index = left_right ? i : size - i - 1;
            ans[index] = frontNode->data;

            if(frontNode->left){
                q.push(frontNode->left);
            }
            if(frontNode->right){
                q.push(frontNode->right);
            }
        }
        left_right = !left_right;
        for(auto i : ans){
            result.push_back(i);
        }
    }
    return result;
}

int main()
{
    Node *root = NULL;
    // Creating a tree -> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    int ans = height(root);
    cout << ans << endl;

    vector<int> answer = zigzag(root);
    for (int i = 0; i < answer.size(); ++i) {
        cout << answer[i] << " ";
    }

}