#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    int x=1, soma=0;
    system("cls");
    setlocale(LC_ALL,"");
    printf ("Esse programa encontra um valor igual a 0 e mostra a soma dos n�meros digitados");
    do
    {
    	printf("\nDigite um n�mero:");
 		scanf("%i", &x);
 		soma = x + soma;
	}while(x != 0);
	printf("\nA soma dos n�meros � %i", soma);
	getch();
}
