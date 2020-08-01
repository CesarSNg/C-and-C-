#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main ()
{
	int x, y;
	system("cls");
	setlocale(LC_ALL,"");
	printf("Esse programa lê um número menor que cinco e mostra os números pares entre ele e 20");
	printf("\nDigite o número desejado:");
	scanf("%i", &y);
	if (y<5)
	{
	for (x=y; x<=20; x++)
	{
		if(x%2==0)
		{
			printf("\n%i",x);
		}
	}
	
	}
	else
	{
		printf("\nO número é maior que  5");
	}
	getch();
}
