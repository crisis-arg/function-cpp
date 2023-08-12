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
int find_min(bst_node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    else if ((*root).left == NULL)
    {
        return (*root).data;
    }
    else
    {
        return find_min((*root).left);
    }
}
int find_max(bst_node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    else if ((*root).right == NULL)
    {
        return (*root).data;
    }
    else
    {
        return find_max((*root).right);
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
    print(root);
    cout << "min = "
         << " " << find_min(root) << endl;
    cout << "max = "
         << " " << find_max(root);
}
