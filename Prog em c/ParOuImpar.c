#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");
    int n1;
    printf("Digite um n�mero: ");
    scanf("%d", &n1);
    if (n1 % 3 == 0){
        printf("!!O n�mero %d � multiplo de 3!!", n1);
    }else{
        printf("!!O n�mero %d n�o � multiplo de 3!!", n1);
    }
    printf("\n");
    system("PAUSE");
}
