#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main ()
{
	int x, y, totalsoma=0, totalmult=1, dec;
	system("cls");
    setlocale(LC_ALL,"");
    printf ("Esse programa recebe 2 números e faz a soma dos pares no intervalo e multiplica os ímpares\n");
	printf("obs -> o valor de y tem que maior que x ");
	printf("\nDigite o primeiro número:");
	scanf("%i", &y);
	printf("\nDigite o segundo número:");
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
	printf("\nO valor da soma é %i", totalsoma);
	printf("\nO valor da multiplicação é %i", totalmult);
	getch();
}

