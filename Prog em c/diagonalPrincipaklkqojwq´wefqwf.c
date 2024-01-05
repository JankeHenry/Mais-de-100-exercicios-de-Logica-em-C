#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int preencheMatriz(int matriz[3][3]);
int imprimeSecundaria(int matriz[3][3]);
void main(){

    setlocale(LC_ALL,"");

    int matriz[3][3];

    preencheMatriz(matriz);
    imprimeSecundaria(matriz);

}
int preencheMatriz(int matriz[3][3]){
    int i,j;
    //preenche matriz;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("A%d %d:",i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    return 0;
}
int imprimeSecundaria(int matriz[3][3]){

    int i,j;
    int k=2;
    //imprime matriz;
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d  ",matriz[i][j]);
        }
    }
    printf("\nDiagonal Secundária: ");
    //imprime diagonal secundária;
    for(i=0;i<3;i++){
        for(j=2;j>=0;j++){
            if(i==k){
                printf("%d, ",matriz[i][j]);
                k--;
            }
        }
    }
}

// 00 01 02
// 10 11 12
// 20 21 22
