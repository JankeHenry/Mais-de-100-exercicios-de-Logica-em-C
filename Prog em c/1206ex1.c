#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
float salario(int h, float sal);
void main(){

    setlocale(LC_ALL,"");

    float sal;
    int h;

    printf("Horas trabalhadas durante a semana: ");
    scanf("%d", &h);
    printf("Valor da hora: R$ ");
    scanf("%f", &sal);

    printf("Salario semanal: R$%.2f",salario(h,sal));
}
float salario(int h, float sal){
    float semana=0;
    if(h>0 && h<=40){
        semana=sal*h;
    }else if(h>40 && h<=60){
        semana=(sal/2)+sal*h;
    }else if(h>60){
        semana=(sal+sal)*h;
    }else{
        printf("ERRO");
    }
    return semana;
}
