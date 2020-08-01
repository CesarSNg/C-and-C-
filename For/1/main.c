#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main ()
{
	int x;
	system("cls");
	setlocale(LC_ALL,"");
	printf("Esse programa mostra números de 1 a 20");
	for(x=1; x<=20;x=x+1)
	{
		printf("\n%i",x);
	}
	getch();
}

