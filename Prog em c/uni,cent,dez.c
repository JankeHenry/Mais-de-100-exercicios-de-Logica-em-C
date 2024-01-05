#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void main(){

    setlocale(LC_ALL,"");

    int N, cent,dez,uni;
    scanf("%d", &N);

    cent = N/100;
    dez = (N-(cent*100))/10;
    uni = abs(cent*100+dez*10-N);

    printf("\n");

    if(N>100){

        printf("Centena: %d",cent);
        printf("\nDezena: %d",dez);
        printf("\nUnidade: %d",uni);
        int soma = cent+dez+uni;
        printf("\n%d + %d + %d = %d",cent,dez,uni,soma );
   }else if(N<100 && N>10){

        printf("\nDezena: %d",dez);
        printf("\nUnidade: %d",uni);
        int soma = dez+uni;
        printf("\n%d + %d = %d",dez,uni,soma );

   }else if(N>0 && N<10){

         printf("\nUnidade: %d",uni);
         printf("\n%d = %d",uni,uni );

   }else{

        printf("!!!Erro!!!");


   }

}







