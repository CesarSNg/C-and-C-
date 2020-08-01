#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int x, valor;
	novo:
	system("cls");
	setlocale(LC_ALL,"");
	printf ("Esse programa imprime em ordem descrescente de 20 até o desejado");
	printf("\nDigite o valor:");
	scanf("%i",&valor);
	for (x=20; x>valor; x--)
	{
		printf(" %i", x);
	}
	getch ();
	goto novo;
	
}
