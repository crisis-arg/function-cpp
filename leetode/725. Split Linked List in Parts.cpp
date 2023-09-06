#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
int get_length(ListNode *head)
{
    int length = 0;
    while (head != NULL)
    {
        head = head->next;
        length++;
    }
    return length;
}
vector<ListNode *> splitListToParts(ListNode *head, int k)
{
    int length = get_length(head);
    int part_size = length / k;
    int extra = length % k;
    vector<ListNode *> ans;
    ListNode *curr = head;
    ListNode *prev = NULL;
    while (head != NULL)
    {
        int each_size = part_size;
        ans.push_back(curr);
        while (each_size > 0)
        {
            prev = curr;
            curr = curr->next;
            each_size--;
        }
        if (extra != 0 && curr != NULL)
        {
            extra--;
            prev = curr;
            curr = curr->next;
        }
        if (prev != NULL)
        {
            head = curr;
            prev->next = NULL;
        }
    }
    while (ans.size() != k)
    {
        ans.push_back(NULL);
    }
    return ans;
}
int main()
{
}