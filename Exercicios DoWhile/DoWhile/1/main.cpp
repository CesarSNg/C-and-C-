#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    int total=0, x, idade21=0, idade50=0;
    system("cls");
    setlocale(LC_ALL,"");
    printf ("O programa solicita as idades das pessoas e mostra quantas têm menos de 21 e mais de 50, terminando em -99. \n");
    while (x != -99)
     {
        printf ("Digite a idade:");
        scanf ("%i", &x);
        if (x>0 && x<21)
        {
        	idade21++;
        }
        if (x>50)
        {
        	idade50++;
        }
        if(x == -99)
        {
			printf("\nVocê digitou %i números abaixo de 21 anos e %i acima de 50.", idade21, idade50);
		}
    }
    getch ();
}

