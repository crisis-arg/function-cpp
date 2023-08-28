#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *detect_cycle(node *head)
{
    node *slow = head;
    node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}
node *detect_first_node(node *head)
{
    node *meet = detect_cycle(head);
    node *start = head;
    while (start != meet)
    {
        start = start->next;
        meet = meet->next;
    }
    return meet;
}
int main()
{
}