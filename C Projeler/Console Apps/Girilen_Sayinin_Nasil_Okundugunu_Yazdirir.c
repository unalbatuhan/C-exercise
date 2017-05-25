// Girilen sayinin, nasil okundugunu ekrana yazdiran programdir. 
#include<stdio.h>
int main (void)
{
	int sayi;
	do
	{
		printf("Sayiyi giriniz==>");
		scanf("%d",&sayi);
		if (sayi>999 || sayi<0)
		printf("girdiginiz sayi uygun deðildir.\n ""0 ile 999 arasinda olmalidir.\n");
		else
		break;
		
	}
	while (1);
	printf("%d sayýsý", ",sayi");
	switch(sayi/100)
	{
		case 1 :printf("yuz");break;
		case 2 : printf("ikiyuz");break;
		case 3 : printf("ucyuz");break;
		case 4 : printf("dortyuz");break;
		case 5 : printf("besyuz");break;
		case 6 : printf("altiyuz");break;
		case 7 : printf("yediyuz"); break;
		case 8 : printf("sekizyuz");break;
		case 9 : printf("dokuzyuz");break;
	}
	switch ((sayi%100)/10)
	{
		case 1 : printf("on");break;
		case 2 : printf("yirmi");break;
		case 3 : printf("otuz");break;
		case 4 : printf("kirk");break;
		case 5 : printf("elli");break;
		case 6 : printf("altmis");break;
		case 7 : printf("yetmis");break;
		case 8 : printf("seksen");break;
		case 9 : printf("doksan");break;
	}
	switch ((sayi%10))
	{
		case 1 : printf("bir");break;
		case 2 : printf("iki");break;
		case 3 : printf("uc");break;
		case 4 : printf("dort");break;
		case 5 : printf("bes");break;
		case 6 : printf("alti");break;
		case 7 : printf("yedi");break;
		case 8 : printf("sekiz");break;
		case 9 : printf("dokuz");break;
	}
	if (sayi ==0)
	printf("sifir");
	printf("sifir seklinde okunur.\n");
	return 0;
	
}


