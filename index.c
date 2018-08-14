#include <stdio.h>

int main(void) 
{
	int arr[10],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("\n%d %d",arr[i],i);
	}
	return 0;
}
