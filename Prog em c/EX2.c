#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL,"");

    int N[4],i,menor=INT_MAX,maior=0;

    for(i=0;i<4;i++){
        printf("N0%d: ",i+1);
        scanf("%d", &N[i]);
        if(N[i]<menor){
            menor=N[i];
        }else if(N[i]>=maior){
            maior=N[i];
        }
    }
    printf("Maior: %d",maior);
    printf("\nMenor: %d",menor);
}
