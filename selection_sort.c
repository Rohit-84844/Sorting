#include<stdio.h>
void print(int num[],int n)
{
  for(int i=0;i<n;i++)
    {
      printf("%d ",num[i]);
    }
}
void selection_sort(int num[],int n)
{
  for(int i=0;i<n-1;i++)
    {
      int min=i;
      for(int j=i+1;j<n;j++)
        {
          if(num[j]<num[min]) min=j;
        }
      int temp=num[i];
      num[i]=num[min];
      num[min]=temp;
    }
}
int main()
{
  int n;
  scanf("%d",&n);
  int num[n];
  for(int i=0;i<n;i++)
    {
      scanf("%d",&num[i]);
    }
  selection_sort(num,n);
  print(num,n);
}
