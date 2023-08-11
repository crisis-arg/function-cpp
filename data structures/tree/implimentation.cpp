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
    else if (data >= (*root).data)
    {
        (*root).right = insert((*root).right, data);
    }
    return root;
}
bool search(bst_node *root, int data)
{
    if (root == NULL)
    {
        return false;
    }
    else if ((*root).data == data)
    {
        return true;
    }
    else if (data <= (*root).data)
    {
        return search((*root).left, data);
    }
    else if (data >= (*root).data)
    {
        return search((*root).right, data);
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
    int num;
    cin >> num;
    if (search(root, num) == true)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
}
