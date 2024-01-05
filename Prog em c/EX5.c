#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL,"");

    float N[3],M;
    int i;

    for(i=0;i<3;i++){
        printf("0%dº Nota: ",i+1);
        scanf("%f",&N[i]);
        if(N[i<0]){
            while(N[i]<0){
                scanf("%f",&N[i]);
            }
        }
        M=M+N[i];
    }
    printf("\n");
    M=M/i;
    printf("MÉDIA: %.2f",M);
    printf("\nSITUAÇÃO: ");
    if(M>=6){
        printf("APROVADO");
    }else{
        printf("REPROVADO");
    }
}
