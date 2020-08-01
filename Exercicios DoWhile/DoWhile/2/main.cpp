#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main ()
{
	int valor=0;
	system ("cls");
	setlocale (LC_ALL, "");
	printf ("Esse programa imprime números digitados de 1 a 4");
	printf("\nDigite um número:");
	scanf("%i",&valor);
	while (valor<1 || valor>4)
	{
		printf("\nEntrada inválida!!");
		printf("\nDigite novamente:");
		scanf("%i",&valor);
	}
	printf("\nParabéns, você acertou %i.", valor);
	getch();
}
