#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void preorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    cout << node->data;
    preorder(node->left);
    preorder(node->right);
}
void postorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout << node->data;
}
void inorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    inorder(node->left);
    cout << node->data;
    inorder(node->right);
}
void levelorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->data << "\t";
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}
int main()
{
    Node *root = new Node(12);
    root->left = new Node(10);
    root->right = new Node(5);
    root->left->left = new Node(7);
    root->left->right = new Node(5);

    preorder(root);
    postorder(root);
    inorder(root);
    levelorder(root);
}