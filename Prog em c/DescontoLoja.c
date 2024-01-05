#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");

    float valor;
    printf("Digite o preço do produto: ");
    scanf("%f", &valor);
    if (valor < 200) {
        printf("desconto de 5%% = %.2f R$",valor*5/100);
    }else if (valor >= 200 && valor<= 500){
        printf("desconto 10%% = %.2f R$ ",valor*10/100);
    }else if (valor > 500 && valor<= 1000){
        printf("desconto 15%% = %.2f R$",valor*15/100);
    }else if (valor > 1000){
        printf("desconto 20%% = %.2f R$",valor*20/100);
    }
    printf("\n");

    system("PAUSE");
}
