#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL,"");

    int n,i,y;

    printf("N: ");
    scanf("%d",&n);
    if(n<0){
        while(n<0){
            printf("!!ERRO!!\n");
            printf("N: ");
            scanf("%d",&n);
        }
        system("cls");
        printf("N: %d",n);
    }
    i=n;
    while(n>=0){
        i--;
        printf("%d  ",n);
        n=i*n;
        printf("%d  ",i);
        n--;

    }
    printf("\n");

    printf("\nfatorial: %d",y);


}
