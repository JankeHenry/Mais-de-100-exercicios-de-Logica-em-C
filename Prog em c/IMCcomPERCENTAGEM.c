#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {

    setlocale(LC_ALL,"");

    int kg,tot;
    float m, imc;

    float magreza,normal,pre_obeso,obeso;

    do{

        printf("Informe o peso (em kgs): ");
        scanf("%d", &kg);
        if(kg>0){
            printf("Informe a altura (em metros): ");
            scanf("%f", &m);

            tot++;

            imc = kg / (m * m);

            if(imc<18){

                magreza++;

            }else if(imc>=18 && imc<25){

                normal++;

            }else if(imc>=25 && imc<30){

                pre_obeso++;

            }else{

                obeso++;

            }
        }
        system("cls");

    }while(kg > 0);
    if(tot == 0){

        printf("Não foi lido nenhum peso");

    }else{

        printf("A porcentagem de pacientes classificados como MAGREZA: %.2f%%",magreza*100/tot);
        printf("\nA porcentagem de pacientes classificados como normal: %.2f%%",normal*100/tot);
        printf("\nA porcentagem de pacientes classificados como pré obeso: %.2f%%",pre_obeso*100/tot);
        printf("\nA porcentagem de pacientes classificados como obeso: %.2f%%",obeso*100/tot);

    }

   printf("\n");

}
