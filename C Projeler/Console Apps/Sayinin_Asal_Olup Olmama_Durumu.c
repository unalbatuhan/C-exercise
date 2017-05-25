#include<stdio.h>
int main (void)
{
	int sayi,i;
	int asal_mi=1;
	printf("Bir Sayi Giriniz ==>");
	scanf(%d,%sayi);
	for (i=2; i<=sayi/2;i++)
	{
		if (sayi%i==0)
		{
			asal_mi=0;
			break;
			if (asal_mi=1)
			printf("%d sayýsý asaldýr.\n",sayi);
			else
			printf("%d sayýsý asal degildir.\n,sayi");
			return 0;
			
		}
	}
}
