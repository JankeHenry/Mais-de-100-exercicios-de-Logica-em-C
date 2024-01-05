#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(){
    int n,cont;
    setlocale(LC_ALL,"");
    printf("!!!Programa para digitar três números e definir qual é o maior e o menor deles!!!\n");
    printf("Digite o 1º número: ");
    scanf("%d", &n);
    int maior = n;
    int menor = n;
    for (cont = 2; cont <= 3 ; cont++){
        printf("Digite o %dº número: ",cont);
        scanf("%d", &n);
        if (n > maior){
            maior = n;
        }else if (n < menor){
            menor = n;
        }
        }
    printf("O maior número foi %d\nO menor número foi %d\n", maior,menor);
    system("PAUSE");
}
