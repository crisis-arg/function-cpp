#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
ListNode *reverseBetween(ListNode *head, int left, int right)
{
    ListNode *dummy = head;
    ListNode *Lprev = dummy;
    ListNode *curr = head;
    for (int i = 0; i < left - 1; i++)
    {
        Lprev = curr;
        curr = curr->next;
    }
    ListNode *prev = NULL;
    ListNode *following ;
    for (int i = 0; i < right - left + 1; i++)
    {
        following = curr->next;
        curr->next = prev;
        prev = curr;
        curr = following;
    }
    Lprev->next->next = curr;
    Lprev->next = prev;
    return dummy->next;
}
int main()
{
    
}