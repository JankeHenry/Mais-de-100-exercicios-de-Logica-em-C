#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(){
    int n,cont;
    setlocale(LC_ALL,"");
    printf("!!!Programa para digitar tr�s n�meros e definir qual � o maior e o menor deles!!!\n");
    printf("Digite o 1� n�mero: ");
    scanf("%d", &n);
    int maior = n;
    int menor = n;
    for (cont = 2; cont <= 3 ; cont++){
        printf("Digite o %d� n�mero: ",cont);
        scanf("%d", &n);
        if (n > maior){
            maior = n;
        }else if (n < menor){
            menor = n;
        }
        }
    printf("O maior n�mero foi %d\nO menor n�mero foi %d\n", maior,menor);
    system("PAUSE");
}
