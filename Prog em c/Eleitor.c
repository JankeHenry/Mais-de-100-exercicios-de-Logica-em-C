#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");

    int idade;
    printf("Digite a idade de uma pessoa: ");
    scanf("%d", &idade);
    if (idade < 16) {
        printf("Não eleitor");
    }else if (idade >= 16 && idade <= 17 || idade > 70){
        printf("Eleitor facultativo");
    }else if (idade >= 18 || idade <=70){
        printf("Eleitor obrigatório");
    }
    printf("\n");


    system("PAUSE");
}
