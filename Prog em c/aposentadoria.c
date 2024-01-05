#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL,"");

    //REQUISITOS
    printf("Requisitos para aposentadoria: \n*Ter pelo menos 65 anos\n*Ou ter trabalhado pelo menos 30 anos\n*Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.");
    printf("\n");

    //IDADE E TEMPO DE SERVIÇO
    int idade,tempo_serv;
    printf("IDADE: ");
    scanf("%d", &idade);



    if(idade>=65){
        printf("APOSENTADORIA: ");
        printf("APROVADA");

    }else{

        printf("TEMPO DE SERVIÇO: ");
        scanf("%d",&tempo_serv);
        if(idade<tempo_serv){
            printf("ERRO");

        }else if(tempo_serv>=30){

            printf("APOSENTADORIA: ");
            printf("APROVADA");

        }else if(idade>=60 && tempo_serv>=25){

            printf("APOSENTADORIA: ");
            printf("APROVADA");

    }else{

            printf("APOSENTADORIA: ");
            printf("REPROVADA");
        }
    }
}

