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
void Delete(int n)
{
   node *temp1 = head;
   node *temp2 = head;
   if (n == 1)
   {
      head = (*temp1).next;
      delete (temp1);
      return;
   }
   while (n != 1)
   {
      temp2 = temp1;
      temp1 = (*temp1).next;
      n--;
   }
   (*temp2).next = (*temp1).next;
   free(temp1);
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
   int n;
   cin >> n;
   Delete(n);
   print();
}