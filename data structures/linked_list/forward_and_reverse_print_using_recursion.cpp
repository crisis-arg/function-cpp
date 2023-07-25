#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *insert(node *head, int x)
{
    node *temp1 = (node *)malloc(sizeof(int));
    node *temp2 = head;
    (*temp1).data = x;
    (*temp1).next = NULL;
    if (head == NULL)
    {
        head = temp1;
    }
    else
    {
        while ((*temp2).next != NULL)
        {
            temp2 = (*temp2).next;
        }
        (*temp2).next = temp1;
    }
    return head;
}
void print(node *p)
{
    if (p == NULL)
    {
        return;
    }
    cout << (*p).data << " ";
    print((*p).next);
}
void reverse_print(node *rp)
{
    if (rp == NULL)
    {
        return;
    }
    reverse_print((*rp).next);
    cout << (*rp).data << " ";
}
int main()
{
    struct node *head = NULL;
    head = insert(head, 2);
    insert(head, 4);
    insert(head, 7);
    insert(head, 3);
    insert(head, 5);
    insert(head, 9);
    insert(head, 40);
    print(head);
    cout << endl;
    reverse_print(head);
}