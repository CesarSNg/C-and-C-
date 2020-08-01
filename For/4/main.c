#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main ()
{
	int x;
	system("cls");
	setlocale(LC_ALL,"");
	printf("Esse programa faz a tabuada do número desejado");
	printf("\nDigite o número desejado:");
	scanf("%i", &x);
	for(x=x*1; x=x*10; x=x*2 && x=x*3)
	{
		printf("\n%i",x);
	}
	getch();
}


