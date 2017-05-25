#include<stdio.h>
int main (void)
{
	int i = 0;
	for (;i<12; i++)
	{
		if((i++ +1) ==5)
		printf("%d\n",i);
		else
		if (i %2==0)break;
		else if (i %3==0)continue;
		else
		printf("%d\n",i);
		
	}
	return 0;
}
