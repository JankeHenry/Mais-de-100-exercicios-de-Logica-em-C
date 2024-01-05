#include<stdio.h>
#include<stdio.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL,"");

    float N=0;//tempo;
    float PMT=1500;//valor da percela;
    float P=30000;//valor a ser financiado;
    float i=1.5;//taxa de juros;

    printf("TEMPO = %.2f",N);
    printf("\nVALOR DA PARCELA = %.2f",PMT);
    printf("\nVALOR A SER FINANCIADO = %.2f",P);
    printf("\nTAXA DE JUROS = %.2f\n\n",i);

    int cont;
    float JUROS_C;

    while(JUROS_C<1500){
        N = N+abs((PMT/(PMT-(P*i))));
        JUROS_C = P*pow(1+i,N);
    }
    N = i*N * (1+i);
    printf("N = %.2f",N);
    printf("\n\nA) Ele conseguirá ter uma parcela nesse valor com essas condições de financiamento?\nSe sim, em quanto tempo ele pagará o financiamento?");
    printf("\n");
    if(JUROS_C>1500){
        printf("\nR: Sim, ele vai conseguir em um total de %.2f meses", N);
        printf("\n\nB) Qual o valor mínimo da parcela a ser  paga por Carlos com essas condições de financiamento?");
        printf("\n\nR: %.2f R$", JUROS_C);
    }else{
        printf("\n\nR: Não, ele não vai conseguir!!");
    }
    printf("\n");

}
