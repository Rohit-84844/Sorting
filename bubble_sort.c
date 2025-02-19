#include<stdio.h>
void print(int num[],int n)
{
  for(int i=0;i<n;i++)
    {
      printf("%d ",num[i]);
    }
}
void bubble_sort(int num[],int n)
{
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<n-1;j++)
        {
          if(num[j]>num[j+1])
          {
            int temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
          }
        }
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
  bubble_sort(num,n);
  print(num,n);
}
