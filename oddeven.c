#include<stdio.h>
void main()
{
  int t,n;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    if(n&1)
    {
      printf("odd\n");
    }
    else
    {
      printf("even\n");
    }
  }
}
