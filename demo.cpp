
#include <bits/stdc++.h>
using namespace std;
void Delete(int n)
{
   node *temp1 = head;
   if (n == 1)
   {
      head = (*temp1).next;
      free(temp1);
      return;
   }
   for (int i = 0; i < n - 2; i++)
   {
      temp1 = (*temp1).next;
      node *temp2 = (*temp1).next;
      (*temp1).next = (*temp2).next;
      free(temp2);
   }
}