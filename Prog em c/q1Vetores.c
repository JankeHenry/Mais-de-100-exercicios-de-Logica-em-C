#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10
void main(){

    setlocale(LC_ALL,"");

    int i;
    float v[TAM];
    printf("Digite 10 n�meros:\n");

    for(i=0;i<TAM;i++){
        printf("%d� N�mero: ",i+1);
        scanf("%f", &v[i]);
    }
    for(i=TAM-1;i>=0;i--){
        printf("\n%d� N�mero: %.2f",i+1,v[i]);
    }
}
