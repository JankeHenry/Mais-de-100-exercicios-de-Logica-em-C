#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL,"");

    int N;

    printf("N: ");
    scanf("%d", &N);

    printf("O número %d é ",N);
    if(N==0){
        printf("NULO");
    }else{
        if(N%2==0){
            printf("par");
        }else{
            printf("ímpar");
        }
        printf(" ");
        if(N<0){
            printf("negativo");
        }else{
            printf("positivo");
        }
    }
}
