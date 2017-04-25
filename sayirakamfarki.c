#include<stdio.h>
int sayifark(int sayi)
{
    int yuzler, onlar, birler;
    //Yanlissa 0 dogruysa sayiyi geri dondurecek.
    if(sayi > 999)
    return 0; // sayi 999'dan büyükse direkt 0 gonder.
    yuzler = sayi / 100; // Yuzler basamaginin degeri bulunuyor.
    onlar = (sayi yuzler * 100) / 10; // Onlar basamaginin degeri bulunuyor.
    birler = sayi % 10; // Birler basamaginin degeri bulunuyor.
    printf("%d %d %d\n", yuzler, onlar, birler);
    if(yuzler != onlar && yuzler && != birler && onlar != birler) 
    return 1;
    else
    return sayi;
}
