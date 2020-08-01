#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	
	int soma=0,z=0;
	setlocale(LC_ALL,"");
	system("cls");
	printf("Esse programa mostra a soma total dos cem primeiros números\n");
	while (z<100)
	{
		soma = soma + z;
		z++;
	}
		printf ("\nA soma toal dos cem primeiros númeroe é %i", soma);
	getch();
}

