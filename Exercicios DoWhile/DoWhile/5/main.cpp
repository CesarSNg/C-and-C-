#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main ()
{
	double popA=80000, popB=200000;
	int x=0;
	system ("cls");
	setlocale (LC_ALL, "");
	printf ("Verifica programa compara a população A e B, verificando seu crescimento  até a igualdade ou superioridade de A\n");
	printf ("População  B = 200000  habitantes com crescimento de 1.5%% ao ano\n");
	printf ("População  A = 80000  habitantes com crescimento de 3%% ao ano\n");
	while (popA < popB)
	{
		popA = popA + (popA * 0.03);
		popB = popB + (popB * 0.015);
		x++;
	}
	printf ("Vai ser necessário %i anos para ocorrer o crescimento populacional na Nação A para ser maior que a B!!");
	printf ("\nA população de A chegou em %.2f", popA);
	printf ("\nA população de B chegou em %.2f", popA);
	getch();
}
