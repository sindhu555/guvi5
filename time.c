
#include <stdio.h>

int main(void) 
{
	int min,hrs,mins,secs=00;
	scanf("%d",&min);
	hrs=min/60;
	mins=min%60;
	if(mins>60)
	{
		secs=mins%60;
		mins=mins-secs;
	}
	printf("%d %d ",hrs,mins);
	return 0;
}
