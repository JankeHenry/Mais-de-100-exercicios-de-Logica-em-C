#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL,"");

    //MENU;
    printf("OPÇÕES");
    printf("\n+[1]");
    printf("\n-[2]");
    printf("\nX[3]");
    printf("\n%%[4]");
    printf("\nOPÇÃO: ");
    int op ;
    scanf("%d", &op);

    //Números;
    float n1,n2;
    printf("Digite N1: ");
    scanf("%f", &n1);
    printf("Digite N2: ");
    scanf("%f", &n2);

    //condicional;
    float soma,sub,mult,div;


    switch(op){

        case 1:
            soma = n1+n2;
            printf("SOMA: %.2f", soma);
            break;

        case 2:
            sub = n1-n2;
            printf("SUBTRAÇÃO: %.2f", sub);
            break;

        case 3:
            mult = n1*n2;
            printf("MULTIPLICAÇÃO: %.2f", mult);
            break;

        case 4:

            if (n1>n2){
                div = n1/n2;
            }else{
                div = n2/n1;
            }

            printf("DIVISÃO: %.2f", div);
            break;

        default:
            printf("ERRO");

    }

}
