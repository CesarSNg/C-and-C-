#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main ()
{
	int x, y;
	system("cls");
	setlocale(LC_ALL,"");
	printf("Esse programa lê dois números e mostra a diferença entre eles");
	printf("\nDigite o 1° número desejado:");
	scanf("%i", &x);
	printf("\nDigite o 2° número desejado:");
	scanf("%i", &y);
	for(x>=y; x<=y;x=x+1)
	{
		printf("\n%i",x);
	}
	getch();
}

