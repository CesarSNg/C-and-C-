#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main ()
{
	int x, y, totalsoma=0, totalmult=1, dec;
	system("cls");
    setlocale(LC_ALL,"");
    printf ("Esse programa recebe 2 n�meros e faz a soma dos pares no intervalo e multiplica os �mpares\n");
	printf("obs -> o valor de y tem que maior que x ");
	printf("\nDigite o primeiro n�mero:");
	scanf("%i", &y);
	printf("\nDigite o segundo n�mero:");
	scanf("%i", &x);
	dec=y;
	do
	{
		{
			totalsoma= dec+totalsoma;
		}
		dec--;	
	}while(dec != x);
	dec=y;
	do
	{
		if(dec%2 != 0)
		{
			totalmult = dec*totalmult;
		}
		dec--;
	}while (dec !=x);
	printf("\nO valor da soma � %i", totalsoma);
	printf("\nO valor da multiplica��o � %i", totalmult);
	getch();
}

