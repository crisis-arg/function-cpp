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
void reverse()
{
   node *curr, *previous, *following;
   curr = head;
   previous = NULL;
   while (curr != NULL)
   {
      following = (*curr).next;
      (*curr).next = previous;
      previous = curr;
      curr = following;
   }
   head = previous;
}
int main()
{
   head = NULL;
   insert(2);
   insert(4);
   insert(7);
   insert(3);
   insert(5);
   insert(9);
   insert(40);
   print();
   reverse();
   print();
}