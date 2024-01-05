#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int esp(int k, int n);
void main(){

    setlocale(LC_ALL,"");

    int k,n;

    printf("K: ");
    scanf("%d", &k);
    printf("n: ");
    scanf("%d", &n);

    printf("%d^%d = %d",k,n,esp(k,n));
}
int esp(int k, int n){
    //espn, o esporte do seu jeito;
    int i,espn=k;
    for(i=0;i<n-1;i++){
        espn=espn*k;
    }
    return espn;
}
