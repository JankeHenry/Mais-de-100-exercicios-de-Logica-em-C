#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void media(float n1,float n2,float n3,char op);
int main(){

    setlocale(LC_ALL,"");

    char op;
    float n1,n2,n3;

    printf("01� Nota: ");
    scanf("%f", &n1);

    printf("02� Nota: ");
    scanf("%f", &n2);

    printf("03� Nota: ");
    scanf("%f", &n3);

    fflush(stdin);
    printf("Digite uma letra[A/P/H]: ");
    scanf("%c", &op);
    if(op!='A'&&op!='P'&&op!='H'){
        while(op!='A'&&op!='P'&&op!='H'){
            fflush(stdin);
            printf("Digite uma letra[A/P/H]: ");
            scanf("%c", &op);
        }
    }

    media(n1,n2,n3,op);
    return 0;
}
void media(float n1,float n2,float n3,char op){
    float med=0;
    switch(op){
    case 'A':
        med=(n1+n2+n3)/3;
        printf("M�dia aritm�tica: %.1f",med);
        break;
    case 'P':
        med=(n1*5+n2*3+n3*2)/10;
        printf("M�dia ponderada: %.1f",med);
        break;
    case 'H':
        med=3/(1/n1+1/n2+1/n3);
        printf("M�dia harm�nica: %.1f", med);
        break;
    }
}
