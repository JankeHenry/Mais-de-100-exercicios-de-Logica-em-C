#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void main(){
    //Apenas números inteiros;
    setlocale(LC_ALL,"");
    int cont;
    float n, media;
    while (cont < 4){
        printf("N%d: ", cont+1);
        scanf("%f", &n);
        cont++;
        media = media + n;
    }
    media = media / cont;
    printf("A média entre os números foi de %.2f\n", media);
    system("PAUSE");
}
