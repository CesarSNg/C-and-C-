#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main ()
{
	int x, y;
	system("cls");
	setlocale(LC_ALL,"");
	printf("Esse programa l� um n�mero menor que cinco e mostra os n�meros pares entre ele e 20");
	printf("\nDigite o n�mero desejado:");
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
		printf("\nO n�mero � maior que  5");
	}
	getch();
}
