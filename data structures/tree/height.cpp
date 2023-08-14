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
int find_height(bst_node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int left_height = find_height((*root).left);
    int right_height = find_height((*root).right);
    return max(left_height, right_height) + 1;
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
        cout << root << endl
             << &root << endl
             << (*root).data << endl;
    }
    cout << find_height(root);
}