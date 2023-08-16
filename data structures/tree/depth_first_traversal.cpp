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
    (*new_node).data = data;
    (*new_node).left = NULL;
    (*new_node).right = NULL;
    return new_node;
}
bst_node *insert(bst_node *root, int data)
{
    if (root == NULL)
    {
        root = get_new_node(data);
    }
    else if (data <= (*root).data)
    {
        (*root).left = insert((*root).left, data);
    }
    else if (data > (*root).data)
    {
        (*root).right = insert((*root).right, data);
    }
    return root;
}
void preorder(bst_node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        cout << (*root).data << " ";
        preorder((*root).left);
        preorder((*root).right);
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
void postorder(bst_node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postorder((*root).left);
        postorder((*root).right);
        cout << (*root).data << " ";
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
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
}
