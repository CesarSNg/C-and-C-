#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main ()
{
	int valor=0;
	system ("cls");
	setlocale (LC_ALL, "");
	printf ("Esse programa imprime n�meros digitados de 1 a 4");
	printf("\nDigite um n�mero:");
	scanf("%i",&valor);
	while (valor<1 || valor>4)
	{
		printf("\nEntrada inv�lida!!");
		printf("\nDigite novamente:");
		scanf("%i",&valor);
	}
	printf("\nParab�ns, voc� acertou %i.", valor);
	getch();
}
