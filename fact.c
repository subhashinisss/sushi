#include<stdio.h>
int main()
{
int t,n,i,fact;
scanf("%d",&t);
while(t--)
{
	fact=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("%d\n",fact);
}
}
