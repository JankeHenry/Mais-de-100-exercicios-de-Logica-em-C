#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string>
#include<iostream>

using namespace std;

void main(){

    setlocale(LC_ALL,"");

    int cont;
    char minusculo[100], maiusculo[100];

    setbuf(stdin, 0);

    fgets(maiusculo, 100, stdin);
    fgets(minusculo, 100, stdin);

    minusculo[strlen(minusculo)-1] = '\0';
    maiusculo[strlen(maiusculo)-1] = '\0';

    scanf("%s", &minusculo);

    for(cont=0;cont<100;cont++){
        if(minusculo[cont]=='a'){
            maiusculo[cont]='A';
        }else if(minusculo[cont]=='b'){
            maiusculo[cont]='B';
        }else if(minusculo[cont]=='c'){
            maiusculo[cont]='C';
        }else if(minusculo[cont]=='d'){
            maiusculo[cont]='D';
        }else if(minusculo[cont]=='e'){
            maiusculo[cont]='E';
        }else if(minusculo[cont]=='f'){
            maiusculo[cont]='F';
        }else if(minusculo[cont]=='g'){
            maiusculo[cont]='G';
        }else if(minusculo[cont]=='h'){
            maiusculo[cont]='H';
        }else if(minusculo[cont]=='i'){
            maiusculo[cont]='I';
        }else if(minusculo[cont]=='j'){
            maiusculo[cont]='J';
        }else if(minusculo[cont]=='k'){
            maiusculo[cont]='K';
        }else if(minusculo[cont]=='l'){
            maiusculo[cont]='L';
        }else if(minusculo[cont]=='m'){
            maiusculo[cont]='M';
        }else if(minusculo[cont]=='n'){
            maiusculo[cont]='N';
        }else if(minusculo[cont]=='o'){
            maiusculo[cont]='O';
        }else if(minusculo[cont]=='p'){
            maiusculo[cont]='P';
        }else if(minusculo[cont]=='q'){
            maiusculo[cont]='Q';
        }else if(minusculo[cont]=='r'){
            maiusculo[cont]='R';
        }else if(minusculo[cont]=='s'){
            maiusculo[cont]='S';
        }else if(minusculo[cont]=='t'){
            maiusculo[cont]='T';
        }else if(minusculo[cont]=='u'){
            maiusculo[cont]='U';
        }else if(minusculo[cont]=='v'){
            maiusculo[cont]='V';
        }else if(minusculo[cont]=='w'){
            maiusculo[cont]='W';
        }else if(minusculo[cont]=='x'){
            maiusculo[cont]='X';
        }else if(minusculo[cont]=='y'){
            maiusculo[cont]='Y';
        }else if(minusculo[cont]=='z'){
            maiusculo[cont]='Z';
        }

    }

        printf("\n\n%s", maiusculo);
}
