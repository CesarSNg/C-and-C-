#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main ()
{
	int x;
	system("cls");
	setlocale(LC_ALL,"");
	printf("Esse programa faz a tabuada do n�mero desejado");
	printf("\nDigite o n�mero desejado:");
	scanf("%i", &x);
	for(x=x*1; x=x*10; x=x*2 && x=x*3)
	{
		printf("\n%i",x);
	}
	getch();
}


