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
struct bst_node *Delete(struct bst_node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    else if (data < root->data)
    {
        root->left = Delete(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = Delete(root->right, data);
    }
    else
    {
        // Case 1:  No child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        // Case 2: One child
        else if (root->left == NULL)
        {
            struct bst_node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            struct bst_node *temp = root;
            root = root->left;
            delete temp;
        }
        // case 3: 2 children
        else
        {
            struct bst_node *temp = findmin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}
int cnt = 10;
void print_1(bst_node *root, int space)
{

    if (root == NULL)
        return;

    space += cnt;

    print_1((*root).right, space);

    cout << endl;
    for (int i = cnt; i < space; i++)
    {
        cout << " ";
    }
    cout << (*root).data << endl;

    print_1((*root).left, space);
}
void print(bst_node *root)
{
    print_1(root, 0);
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
    print(root);
    int num;
    cout << "enter a num you want to delete" << endl;
    cin >> num;
    cout << endl
         << endl
         << endl;
    root = Delete(root, num);
    print(root);
}