#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL,"");

    int n1, n2;
    float total;

    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);
    int cont = n1;
    total = n1;
    while (n1 > n2){
        printf("o\n");
        total = total + n1;
        n2 = n2 - 1;
    }

    printf("\n%.2f", total);

    system("PAUSE");

}
