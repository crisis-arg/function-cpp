#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next; /* data */
};
node *head;
void insert(int x, int n)
{
    node *temp1 = (node *)malloc(sizeof(int));
    (*temp1).data = x;
    (*temp1).next = NULL;
    if (n == 1)
    {
        (*temp1).next = head;
        head = temp1;
        return;
    }
    node *temp2 = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp2 = (*temp2).next;
    }
    (*temp1).next = (*temp2).next;
    (*temp2).next = temp1;
}
void print()
{
    node *temp = head;
    cout << "the list is  ";
    while (temp != NULL)
    {
        cout << (*temp).data << " ";
        temp = (*temp).next;
    }
    cout << endl;
}
int main()
{
    int k;
    cout << "how many nums: " << endl;
    cin >> k;
    int x, n;
    for (int i = 0; i < k; i++)
    {
        cout << "enter the num " << endl;
        cin >> x;
        cout << "enter the position " << endl;
        cin >> n;
        insert(x, n);
        print();
    }
}