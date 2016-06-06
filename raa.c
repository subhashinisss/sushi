#include <stdio.h>

int main() {
	//code
	int t,n,i,j;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    i=0,j=n-1;
	    int temp[n],index=0;
	    if(i<j)
	    {
	        temp[index++]=arr[j];
	        temp[index++]=arr[i];
	        j--;
	        i++;
	    }
	    while(n & 1)
	    {
	        temp[index]=arr[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        arr[i]=temp[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        printf("%d ",arr[i]);
	    }
	    printf("\n");
	}
	return 0;
}
