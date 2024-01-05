#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>


void main(){

    setlocale(LC_ALL,"");
    int A,B,resposta,cont;

    char gabarito[4];

    cont = 1;

    while(cont<=5){

        srand((unsigned)time(NULL));
        A = rand()%10;
        B = rand()%10;
        int resultado = A+B;

        printf("%dº QUESTÃO\n", cont);
        printf("%d+%d = ",A,B);
        scanf("%d", &resposta);
        if(resposta != resultado){
            printf("X");
            gabarito[cont] = "X";
        }else{
            printf("C");
            gabarito[cont] = "C";
        }
        if(cont<5){
            printf("\nTECLE QUALQUER BOTÃO PARA IR PARA A PRÓXIMA QUESTÃO");

        }else{
            printf("\nGABARITO");
        }

    printf("\n");
    cont++;
    system("PAUSE");
    system("cls");
    }
    printf("GABARITO\n");
    for(cont;4;cont++){
        printf("\n%s", gabarito[cont++]);
    }
}
