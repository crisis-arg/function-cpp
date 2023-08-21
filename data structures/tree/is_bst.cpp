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
bool is_bst_util(bst_node *root, int min, int max)
{
    if (root == NULL)
    {
        return true;
    }
    if ((*root).data > min &&
        (*root).data < max &&
        is_bst_util((*root).left, min, (*root).data) &&
        is_bst_util((*root).right, (*root).data, max))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool is_bst(bst_node *root)
{
    return is_bst_util(root, INT_MIN, INT_MAX);
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
    if (is_bst(root))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}