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
void level_order(bst_node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        queue<bst_node *> q;
        q.push(root);
        while (!q.empty())
        {
            bst_node *current = q.front();
            q.pop();
            cout << (*current).data << " ";
            if ((*current).left != NULL)
            {
                q.push((*current).left);
            }
            if ((*current).right != NULL)
            {
                q.push((*current).right);
            }
        }
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
    level_order(root);
}
