#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL,"");

    int n[10],i,x;

    for(i=0;i<10;i++){
        printf("Digite o %d� n�mero: ",i+1);
        scanf("%d", &n[i]);
    }
    printf("X: ");
    scanf("%d", &x);

    for(i=0;i<10;i++){
        if(n[i] == x){
            printf("O valor %d foi encontrado na posi��o ");
            break;
        }else{
            printf("N�o h� n�meros que correspondem a esse valor");
            break;
        }
    }
    for(i=0;i<10;i++){
        if(n[i] == x){
            if(i==0){
                printf("%d",i+1);
            }else{
                printf(",%d",i+1);
            }
        }
        if(i==9){
            printf(".");
        }
    }
}
