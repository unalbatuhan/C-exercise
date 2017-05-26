/*�a�r�n�n yap�labilmesi i�in <sched.h> dosyas� eklenmelidir.*/
#include <sched.h>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

/*Cocuk prosesin kullanilacagi yigin boyutu*/
#define YIGIN_BOYUT 1024
int yeni_proses() /*cocouk prosesin calistiracag� fonksiyon*/
{
printf("Yeni prosesim\n");
return 1;
}
main ()
{
	int pid;
	void* yigin; /*Cocuk prosesin yigin isaretcisi*/
	yigin = malloc(YIGIN_BOYUT); /*Bellek alan� tahsisi*/
	if (yigin == 0) /*Bellek tahsis hatasi kontrolu*/
	{
		printf("Bellek tahsis hatasi\n");
		exit(1);
	}
	/*clone ile yeni process olusturuluyor*/
	pid = clone(&yeni_proses, (char*) yigin + YIGIN_BOYUT, 0, 0);
	pid = waidpid(pid, NULL, 0); /*Cocuk prosesi bekle*/
	printf("Cocuk proses sonlandi\n");
	free(yigin); /*Bellegi birak*/
}
