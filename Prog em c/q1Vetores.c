#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10
void main(){

    setlocale(LC_ALL,"");

    int i;
    float v[TAM];
    printf("Digite 10 números:\n");

    for(i=0;i<TAM;i++){
        printf("%dº Número: ",i+1);
        scanf("%f", &v[i]);
    }
    for(i=TAM-1;i>=0;i--){
        printf("\n%dº Número: %.2f",i+1,v[i]);
    }
}
