#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    int x=0;
    system("cls");
    setlocale(LC_ALL,"");
    printf ("Esse programa lê um número até achar um menor ou igual a 1");
    do
	{
		printf("\nDigite um número:");
 		scanf("%i", &x);
	}while (x>1);
	printf("\nO número %i é menor ou igual a um", x);
	getch();
}
