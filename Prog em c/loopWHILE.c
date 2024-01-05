#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void main(){
    //Apenas números inteiros;
    setlocale(LC_ALL,"");

    int cont = 1;
    float n,alt, base;

    printf("Digite a altura do %dº triângulo : ", cont);
    scanf("%f", &alt);
    printf("Digite a base do %dº triângulo : ", cont);
    scanf("%f", &base);
    float area = base*alt/2;
    float menor_area = area;
    printf("ÁREA: %.2f\n", area);
    system("PAUSE");
    system("cls");
    while (cont < 3 ){
        printf("Digite a altura do %dº triângulo : ", cont+1);
        scanf("%f", &alt);
        printf("Digite a base do %dº triângulo : ", cont+1);
        scanf("%f", &base);
        area = base*alt/2;
        if (base < -1 || area < -1){
            n = 0;
            cont = cont - 1;
            printf("ERRO\nREDIGITE O NÚMERo\n");
            system("PAUSE");
        }
        if (area < menor_area){
                menor_area = area;
        }

        cont++;
        printf("ÁREA: %.2f\n", area);
        system("PAUSE");
        system("cls");
    }
    printf("A menor área foi: %.2f", menor_area);

    system("PAUSE");
}

