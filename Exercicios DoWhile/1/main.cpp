#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    int x=0;
    system("cls");
    setlocale(LC_ALL,"");
    printf ("Esse programa l� um n�mero at� achar um menor ou igual a 1");
    do
	{
		printf("\nDigite um n�mero:");
 		scanf("%i", &x);
	}while (x>1);
	printf("\nO n�mero %i � menor ou igual a um", x);
	getch();
}
