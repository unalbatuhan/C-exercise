/* Girilen 3 tamsayinin bir ucgenin kenari olup olmadigi kontrol edilir */
 #include<stdio.h> 
int main( void ) { 
int a, b, c;
 int temp; 
printf("Birinci kenar uzunlugu> "); 
scanf("%d", &a);
 printf("Ikinci kenar uzunlugu> "); 
scanf("%d", &b); 
printf("Ucuncu kenar uzunlugu> ");
 scanf("%d", &c); 
/* a ile b den buyuk olan a ya kucuk olan b ye atanir */ 
if(a < b)
{ 
temp = a; 
a = b; 
b = temp;
 }
 if( ((a + b) < c) || ((a - b) > c) ) 
printf("Bu kenar uzunluklarina sahip bir ucgen olamaz.\n"); 
else printf("Bu kenar uzunluklarina sahip bir ucgen cizilebilir.\n");
 return 0;
 } 

