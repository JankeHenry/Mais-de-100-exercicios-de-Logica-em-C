#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
float maior(float n1,float n2,float n3);
void main(){

    setlocale(LC_ALL,"");

    float n1,n2,n3;

    printf("01º Nota: ");
    scanf("%f", &n1);
    printf("02º Nota: ");
    scanf("%f", &n2);
    printf("03º Nota: ");
    scanf("%f", &n3);
    printf("Média entre as duas maiores notas: %.1f",maior(n1,n2,n3));
}
float maior(float n1,float n2,float n3){
    float media=0;
    if(n1>n2 && n2>n3){
        media=n1+n2;
    }else if(n2>n1 && n3>n1){
        media=n2+n3;
    }else if(n3>n2 && n1>n2){
        media=n3+n1;
    }
    return media/2;
}
