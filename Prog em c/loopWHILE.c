#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void main(){
    //Apenas n�meros inteiros;
    setlocale(LC_ALL,"");

    int cont = 1;
    float n,alt, base;

    printf("Digite a altura do %d� tri�ngulo : ", cont);
    scanf("%f", &alt);
    printf("Digite a base do %d� tri�ngulo : ", cont);
    scanf("%f", &base);
    float area = base*alt/2;
    float menor_area = area;
    printf("�REA: %.2f\n", area);
    system("PAUSE");
    system("cls");
    while (cont < 3 ){
        printf("Digite a altura do %d� tri�ngulo : ", cont+1);
        scanf("%f", &alt);
        printf("Digite a base do %d� tri�ngulo : ", cont+1);
        scanf("%f", &base);
        area = base*alt/2;
        if (base < -1 || area < -1){
            n = 0;
            cont = cont - 1;
            printf("ERRO\nREDIGITE O N�MERo\n");
            system("PAUSE");
        }
        if (area < menor_area){
                menor_area = area;
        }

        cont++;
        printf("�REA: %.2f\n", area);
        system("PAUSE");
        system("cls");
    }
    printf("A menor �rea foi: %.2f", menor_area);

    system("PAUSE");
}

