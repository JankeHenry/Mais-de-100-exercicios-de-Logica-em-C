#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){

    int i,A[10],B[10],C[20],j=0,k=0;

    do{
        if(i==10){
            i=0;
            j++;
        }
        for(i=0;i<10;i++){
            if(j<1){
                printf("A[%d]: ",i);
                scanf("%d", &A[i]);
            }else{
                printf("B[%d]: ",i);
                scanf("%d", &B[i]);
            }
        }
        system("cls");
    }while(j<1);
    printf("A=[");
    for(i=0;i<10;i++){
        if(i<9){
            printf("%d,",A[i]);
        }else{
            printf("%d]",A[i]);
        }
    }
    printf("\nB=[");
    for(i=0;i<10;i++){
        if(i<9){
            printf("%d,",B[i]);
        }else{
            printf("%d]",B[i]);
        }
    }
    for(i=0;i<10;i++){
        C[k]=A[i];
        k++;
        C[k]=B[i];
        k++;
    }
    printf("\nC=[");
    for(i=0;i<20;i++){
        if(i<19){
            printf("%d,",C[i]);
        }else{
            printf("%d]",C[i]);
        }
    }
}
