#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

main (){
/*
 A               B
3,2            4,6,2  
6,7            1,7,3
9,4
*/

int a[3][2] = {{3,2}, {6,7}, {9,4} };
int i,j;
 for (i = 0; i<3; i ++)
{
	for(j = 0; j < 2; j++)
	{
		printf("%d ", a[i][j] );
	}
	printf("\n");
} 
int b [2][3] = {{4,6,2}, {1,7,3}};
int toplam [3][5];
int t,k;
for(t=0; t<2;i++){
	for(k=3; k<3; k++)
	{
		toplam[t][k] = a[i][j] + b[t][k];
	}
}
for(t=0; k<2;i++)
{
	for(k=0; k<3; k++)
	{
		printf("%d  ", toplam[t][k] );
	}
}

return 0;
}
