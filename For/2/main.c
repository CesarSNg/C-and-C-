#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main ()
{
	int x;
	system("cls");
	setlocale(LC_ALL,"");
	printf("Esse programa l� um n�mero e mostra ele at� o 20");
	printf("\nDigite o n�mero desejado:");
	scanf("%i", &x);
	for(x>1; x<21; x++)
	{
		printf("\n%i",x);
	}
	getch();
}

