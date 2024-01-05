#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int preencheMatriz(int matriz[5][5]);
int imprimeMatriz(int matriz[5][5]);
void main(){

    setlocale(LC_ALL,"");
    int i,j,k=0;
    int matriz[5][5],x;

    preencheMatriz(matriz);
    imprimeMatriz(matriz);
    printf("\nX:");
    scanf("%d", &x);
    printf("\nposição: ");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(x==matriz[i][j]){
                printf("\nA:I%d/J%d:",i+1,j+1);
                k++;
            }
        }
    }
    if(k==0){
        printf("Elemento X não encontrado");
    }
}
int preencheMatriz(int matriz[5][5]){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("A:I%d/J%d:",i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    return 0;
}
int imprimeMatriz(int matriz[5][5]){

    int i,j;
    for(i=0;i<5;i++){
        printf("\n");
        for(j=0;j<5;j++){
            printf("%d  ",matriz[i][j]);
        }
    }
}
