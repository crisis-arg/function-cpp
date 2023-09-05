#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
    Node *random;
};
void insert(Node *head, Node *tail, int val)
{
    Node *newNode = (Node *)malloc(sizeof(int));
    if (head == NULL)
    {
        head = newNode;
        tail = newNode->next;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
Node *copyRandomList(Node *head)
{
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        insert(cloneHead, cloneTail, temp->val);
        temp = temp->next;
    }
    unordered_map<Node *, Node *> oldToNew;
    Node *originalNode = head;
    Node *cloneNode = cloneHead;
    while (originalNode != NULL)
    {
        oldToNew[originalNode] = cloneNode;
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }
    originalNode = head;
    cloneNode = cloneHead;
    while (originalNode != NULL)
    {
        cloneNode->random = oldToNew[originalNode->random];
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }
    return cloneHead;
}
int main()
{
}
