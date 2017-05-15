#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("dizi eleman sayisi: "); scanf("%d",&n);
    int i,j,k,l,dizi[5];
   
    for(i=0; i<n; i++){
        printf("%d. sayiyi giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
   
    // dizi elemanlarinin toplami
    int toplam=0;
    for(l=1; l<n; l++){
        toplam+=dizi[l];
    }


   
    // en buyuk elemanı bulma
    int enb=dizi[0];
    for(j=1; j<n; j++){
        if(enb<dizi[j]){
            enb=dizi[j];
        }
    }

    // en kucuk elemanı bulma
    int enk=dizi[0];
    for(k=1; k<n; k++){
        if(dizi[k]<enk){
            enk=dizi[k];
        }
    }
   
    printf("toplam: ",toplam);
    printf("en buyuk sayi:",enb);
    printf("en kucuk sayi",enk);

    return 0;
   
}

// Çalışan kodlar
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char *argv[]) {
//    int dizi[100];
//    int min_sayi,i,n;
//    printf("eleman sayisi: ");
//    scanf("%d",&n);
//    printf("Dizinin elemanlarini giriniz\n");
//    for(i=0;i<n;i++){
//        printf("Dizinin %d. elemaninini giriniz :\n",i+1);
//        scanf("%d",&dizi[i]);
//    }
//    min_sayi=dizi[0];
//    for(i=1;i<n;i++){
//        if(min_sayi>dizi[i]){
//            min_sayi=dizi[i];
//        }
//    }
//    printf("Dizideki minimun eleman %d dir!!",min_sayi);
//    return 0;
//}