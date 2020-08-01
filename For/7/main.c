#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <locale.h> 
#include <math.h>

void main ()
	{
    int camisa=0, camiseta=0, meia=0, calca=0, tenis=0;
    int x, item;
    float total;
    
    system("cls");
    setlocale(LC_ALL," ");
    printf("Esse programa é de um estoque de uma loja de roupas.\n");

    for(x=1; x<=30; x++){
        system("cls");
        printf("\nCodigo 1 - Camisa - R$100,00");
        printf("\nCodigo 2 - tenis - R$540,00");
        printf("\nCodigo 3 - calça - R$90,00");
        printf("\nCodigo 4 - camiseta - R$30,00");
        printf("\nCodigo 5 - meia - R$25,00");
        printf("\nPara sair digite 99.");

        printf("\nDigite o item vendido:");
        scanf("%i", &item);
        
        if(item==1){
            if(camisa<10){
                camisa++;
            }
            else{
                printf("\nEstoque zerado.");
                getch();
                x--;
            }
        }

        if(item==2){
            if(tenis<6){
                tenis++;
            }
            else{
                printf("\nEstoque zerado.");
                getch();
                x--;
            }
        }

        if(item==3){
            if( calca<4){
                calca++;
            }
            else{
                printf("\nEstoque zerado.");
                getch();
                x--;
            }
        }

        if(item==4){
            if(camiseta<3){
                camiseta++;
            }
            else{
                printf("\nEstoque zerado.");
                getch();
                x--;
            }
        }

        if(item==5){
            if(meia<7){
                meia++;
            }
            else{
                printf("\nEstoque zerado.");
                getch();
                x--;
            }
        }
        if (item==99){
            break;
        }
    }

    /* Total no fim do dia*/ 

    total = (camisa*100) + (tenis*540) + (calca*90)+ (camiseta*30)+ (meia*25);
    
    system("cls");
    printf("\nItens vendido: ");
    printf("\nCodigo 1 - Camisa - %i", camisa);
    printf("\nCodigo 2 - tenis - %i", tenis);
    printf("\nCodigo 3 - calça - %i", calca);
    printf("\nCodigo 4 - camiseta - %i", camiseta);
    printf("\nCodigo 5 - meia - %i", meia);
    printf("\nTotal de faturamento: %.2f", total);

    getch();
}
