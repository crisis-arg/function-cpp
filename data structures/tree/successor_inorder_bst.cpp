#include <bits/stdc++.h>
using namespace std;
struct bst_node
{
    int data;
    bst_node *left;
    bst_node *right;
};
bst_node *get_new_node(int data)
{
    bst_node *new_node = (bst_node *)malloc(sizeof(bst_node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
bst_node *insert(bst_node *root, int data)
{
    if (root == NULL)
    {
        root = get_new_node(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}
bst_node *findmin(bst_node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
bst_node *search(bst_node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data == data)
    {
        return root;
    }
    else if (data < root->data)
    {
        return search(root->left, data);
    }
    else if (data > root->data)
    {
        return search(root->right, data);
    }
}
bst_node *get_successor(bst_node *root, int data)
{
    bst_node *current = search(root, data);
    if (current == NULL)
    {
        return NULL;
    }
    if (current->right != NULL)
    {
        return findmin(current->right);
    }
    else
    {
        bst_node *successor = NULL;
        bst_node *ancestor = root;
        while (ancestor != current)
        {
            if (current->data < ancestor->data)
            {
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else
            {
                ancestor = ancestor->right;
            }
        }
        return successor;
    }
}
void inorder(bst_node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inorder((*root).left);
        cout << (*root).data << " ";
        inorder((*root).right);
    }
}
int main()
{
    bst_node *root = NULL;
    int n, x;
    cout << "how many nums" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "input a num" << endl;
        cin >> x;
        root = insert(root, x);
    }
    inorder(root);
    cout << endl;
    int num;
    cout << "enter the num" << endl;
    cin >> num;
    bst_node *successor = get_successor(root, num);
    cout << "successor:" << successor->data;
}