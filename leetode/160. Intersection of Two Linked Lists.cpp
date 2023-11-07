#include <bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  node *next;
};
int length(node *l)
{
  int len = 0;
  while (l != NULL)
  {
    len++;
    l = l->next;
  }
  return len;
}
node *find_merge(node *A, node *B)
{
  int m = length(A);
  int n = length(B);
  int d = m - n;
  if (n > m) // swap the two node//
  {
    node *temp = A;
    A = B;
    B = temp;
  }
  for (int i = 0; i < d; i++)
  {
    A = A->next;
  }
  while (A != NULL && B != NULL)
  {
    if (A == B)
    {
      return A;
    }
    A = A->next;
    B = B->next;
  }
  return NULL;
}
int main()
{
}
