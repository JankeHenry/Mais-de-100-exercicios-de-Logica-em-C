#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //permite usar acentos;
    int i1,i2;
    setlocale(LC_ALL,"");
    printf("!!!Programa para digitar duas idades e definir quem é mais jovem!!!\n");
    printf("Digite a idade da 1º pessoa: ");
    scanf("%d",&i1);
    printf("Digite a idade da 2º pessoa: ");
    scanf("%d",&i2);
    if (i1 < i2){
        printf("!!!A primeira pessoa é mais nova!!!");
    }else if (i1 > i2){
        printf("!!!A segunda pessoa é mais nova!!!");
    }else{
        printf("!!!As idades são iguais!!!");
    }
    printf("\n");
    system("PAUSE");
}
