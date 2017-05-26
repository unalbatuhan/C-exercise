/*çaðrýnýn yapýlabilmesi için <sched.h> dosyasý eklenmelidir.*/
#include <sched.h>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

/*Cocuk prosesin kullanilacagi yigin boyutu*/
#define YIGIN_BOYUT 1024
int yeni_proses() /*cocouk prosesin calistiracagý fonksiyon*/
{
printf("Yeni prosesim\n");
return 1;
}
main ()
{
	int pid;
	void* yigin; /*Cocuk prosesin yigin isaretcisi*/
	yigin = malloc(YIGIN_BOYUT); /*Bellek alaný tahsisi*/
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
