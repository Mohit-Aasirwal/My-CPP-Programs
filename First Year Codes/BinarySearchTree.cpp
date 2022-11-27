#include <iostream>
using namespace std;

class BSTNode
{
    int data;
    BSTNode *left;
    BSTNode *right;

    BSTNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void Insert(BSTNode *root, int value)
{
    if (!root)
    {
        return new BSTNode(value);
    }
    if (value > root->data)
    {
        root->right = Insert(root->right, value);
    }
    if (value < root->data)
    {
        root->left = Insert(root->left, value);
    }
    return root;
}

int main()
{
    BSTNode *root = new BSTNode(10);
    Insert(root, 15);
    Insert(root, 12);
}