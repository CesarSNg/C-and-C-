#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    int x=1, maior;
    system("cls");
    setlocale(LC_ALL,"");
    printf ("Esse programa recebe um n�mero e determina o maior, terminando em 0 \n");
    while (x != 0)
    {
    printf("Digite os n�meros:");
    scanf("%i", &x);
    if (x>maior)
    {
    	maior = x;
	}
	}
	printf("O maior n�mero � %i!!", maior);
	
	getch();
}
