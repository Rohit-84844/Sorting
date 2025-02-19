#include<stdio.h>
void print(int num[],int n)
{
  for(int i=0;i<n;i++)
    {
      printf("%d ",num[i]);
    }
}
void insertion_sort(int num[],int n)
{
	int j;
	for(int i=1;i<n;i++)
	{
		int temp=num[i];
		j=i-1;
		while(j>=0 && num[j]>temp)
		{
			num[j+1]=num[j];
			j--;
		}
		num[j+1]=temp;
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
  insertion_sort(num,n);
  print(num,n);
}
