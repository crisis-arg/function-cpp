#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head;
void insert(int x)
{
    node *temp = (node *)malloc(sizeof(int));
    (*temp).data = x;
    (*temp).next = head;
    head = temp;
}
void print()
{
    node *temp = head;
    cout << "the list is  ";
    while (temp != NULL)
    {
        cout << (*temp).data;
        temp = (*temp).next;
    }
    cout << endl;
}
int main()
{
    head = NULL;
    cout << "how many nums" << endl;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "input a num" << endl;
        insert(x);
        print();
    }
}