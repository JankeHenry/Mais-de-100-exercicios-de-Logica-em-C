#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    printf("\n\n                                                   LISTA\n                                             VETORES E MATRIZES\n\n");

    //questão 01;
    printf("      01 - Faça um programa que possua um vetor denominado A que armazene 6 numeros inteiros.");
    printf("\n      O programa deve executar os seguintes passos:");
    printf("\n\n      (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.");
    printf("\n\n      (b) Armazene em uma variavel inteira (simples) a soma entre os valores das posicões ");
    printf("\n      A[0], A[1] e A[5] do vetor e mostre na tela esta soma.");
    printf("\n\n      (c) Modifique o vetor na posicão 4, atribuindo a esta posição o valor 100");
    printf("\n\n      (d) Mostre na tela cada valor do vetor A, um em cada linha.");

    //questão 02;
    printf("\n\n      02 - Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.");

    //questão 03;
    printf("\n\n      03 - Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das");
    printf("\n      componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem");
    printf("\n      10 elementos cada. Imprimir todos os conjuntos.");

    //questão 04;
    printf("\n\n      04 - Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois va-");
    printf("\n      lores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa");
    printf("\n      devera escrever a soma dos valores encontrados nas respectivas posições ˜ X e Y .");

    float q4_vetor[8],q4_soma;
    int q4_X,q4_Y;

     //questão 05;
    printf("\n\n      05 - Leia um vetor de 10 posiçõees. Contar e escrever quantos valores pares ele possui.");

    int q5_vetor[10],q5_par;

    //questão 06;
    printf("\n\n      06 - Faça um programa que receba do usuario um vetor com 10 posiões. Em seguida deverá");
    printf("\n      ser impresso o maior e o menor elemento do vetor.");

    float q6_vetor[10],q6_menor,q6_maior;

    //questão 07;
    printf("\n\n      07 - Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima");
    printf("\n      o vetor, o maior elemento e a posição que ele se encontra.");
    int q7_vetor[10],q7_posicao[1][2];

    //questão 08;
    printf("\n\n      08 - Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos");
    printf("\n      na ordem inversa.");

    //questão 09;
    printf("\n\n      09 - Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores");
    printf("\n      lidos na ordem inversa.");

    //questão 10;
    printf("\n\n      10 - Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule");
    printf("\n      e imprima a media geral.");

    printf("\n\n ");

    int op;
    printf("OP: ");
    scanf("%d", &op);
    system("cls");

    int q1_SOMA=0,cont,A[6];
    float q3_matriz[10][2];

    switch (op){
        case 1:

            A[0]=1;
            A[1]=0;
            A[2]=5;
            A[3]=-2;
            A[4]=-5;
            A[5]=7;
            q1_SOMA=A[0]+A[1]+A[5];
            A[4]=100;

            for(cont=0;cont<6;cont++){
                printf("\nA[%d]: %d",cont+1,A[cont]);
            }
            printf("\nSOMA: %d", q1_SOMA);
        break;

        case 2:

            for(cont=0;cont<6;cont++){
                printf("A[%d]: ",cont+1);
                scanf("%d", &A[cont]);
                system("cls");
            }
            for(cont=0;cont<6;cont++){
                printf("A[%d]: %d\n",cont+1,A[cont]);
            }

        break;

        case 3:

            for(cont=0;cont<10;cont++){
                printf("B[%d]: ",cont+1);
                scanf("%f", &q3_matriz[cont][0]);
                system("cls");
                q3_matriz[cont][1]=q3_matriz[cont][0]*q3_matriz[cont][0];
            }
            for(cont=0;cont<10;cont++){
                printf("%.2f ^ 2: %.2f\n", q3_matriz[cont][0],q3_matriz[cont][1]);
            }

        break;

        case 4:

            for(cont=0;cont<8;cont++){
                printf("q4_vetor[%d]: ",cont);
                scanf("%f", &q4_vetor[cont]);
            }
            printf("q4_vetor[X] + q4_vetor[Y]: ");
            printf("\nX: ");
            scanf("%d", &q4_X);
            printf("Y: ");
            scanf("%d", &q4_Y);
            q4_soma = q4_vetor[q4_X]+q4_vetor[q4_Y];
            printf("q4_vetor[%d] + q4_vetor[%d]: %.2f",q4_X,q4_Y,q4_soma);

        break;

        case 5:

            for(cont=0;cont<10;cont++){
                printf("Q5_VETOR[%d]: ",cont+1);
                scanf("%d", &q5_vetor[cont]);
                if(q5_vetor[cont]%2 == 0){
                    q5_par++;
                }
            }
            printf("PARES: %d",q5_par);

        break;

        case 6:

            for(cont=0;cont<10;cont++){
                printf("q6_vetor[%d]: ",cont+1);
                scanf("%f", &q6_vetor[cont]);
                if(cont<1){
                    q6_maior=q6_vetor[cont];
                    q6_menor=q6_vetor[cont];
                }
                if(q6_vetor[cont]>q6_maior){
                    q6_maior=q6_vetor[cont];
                }else if(q6_vetor[cont]<q6_menor){
                    q6_menor=q6_vetor[cont];
                }
            }
            printf("q6_menor: %.2f", q6_menor);
            printf("\nq6_maior: %.2f", q6_maior);

        break;

        case 7:

            for(cont=0;cont<10;cont++){
                printf("q7_vetor[%d]: ",cont+1);
                scanf("%d", &q7_vetor[cont]);
                if(cont<1){
                    //[0][0]=maior elemento;
                    q7_posicao[0][0]=q7_vetor[cont];
                    q7_posicao[0][1]=cont+1;
                }
                if(q7_vetor[cont]>q7_posicao[0][0]){
                    q7_posicao[0][0]=q7_vetor[cont];
                    q7_posicao[0][1]=cont+1;
                }
            }
            printf("\nMAIOR: %d", q7_posicao[0][0]);
            printf("\nPOSIÇÃO: %d", q7_posicao[0][1]);
        break;

        case 8:

            //


        break;

        case 9:

            //

        break;

        case 10:

            //

        break;

    }
    printf("\n");
    return 0;
}
