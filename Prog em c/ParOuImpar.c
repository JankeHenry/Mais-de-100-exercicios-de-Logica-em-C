#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");
    int n1;
    printf("Digite um número: ");
    scanf("%d", &n1);
    if (n1 % 3 == 0){
        printf("!!O número %d é multiplo de 3!!", n1);
    }else{
        printf("!!O número %d não é multiplo de 3!!", n1);
    }
    printf("\n");
    system("PAUSE");
}
