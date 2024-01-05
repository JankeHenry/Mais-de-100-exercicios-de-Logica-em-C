#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(){
    setlocale(LC_ALL,"");
    printf("Tabela de orientção\n");
    printf("\nÁries: de 21 de março a 20 de abril;\nTouro: de 21 de abril a 20 de maio;\nGêmeos: de 21 de maio a 20 de junho;\nCâncer: de 21 de junho a 22 de julho;\nLeão: de 23 de julho a 22 de agosto;\nVirgem: de 23 de agosto a 22 de setembro;\nLibra: de 23 de setembro a 22 de outubro;\nEscorpião: de 23 de outubro a 21 de novembro;\nSagitário: de 22 de novembro a 21 de dezembro;\nCapricórnio: de 22 de dezembro a 20 de janeiro;\nAquário: de 21 de janeiro a 18 de fevereiro;\nPeixes: de 19 de fevereiro a 20 de março;");
    printf("\n");
    int dia, mes;
    printf("Digite o dia em que você nasceu: ");
    scanf("%d", &dia);
    printf("Digite o mês em que você nasceu: ");
    scanf("%d", &mes);
    printf("Você é do signo de ");
    if (dia>=20 && dia<=31 && mes==3 || dia>=1 && dia<=20 &&  mes==4){

        printf("aries");

    }else if (dia>=21 && dia<=30 && mes==4 || dia>=1 && dia<=20 && mes==5){

        printf("touro");

    }else if (dia>=21 && dia<=31 && mes==5 || dia>=1 && dia<=20 && mes==6){

        printf("gemeos");

    }else if (dia>=21 && dia<=30 && mes==6 || dia>=1 && dia<=21 && mes==7){

        printf("cancer");

    }else if (dia>=22 && dia<=31 && mes==7 || dia>=1 && dia<=22 && mes==8){

        printf("leao");

    }else if (dia>=22 && dia<=31 && mes==8 || dia>=1 && dia<=22 && mes==9){

        printf("vigem");

    }else if (dia>=22 && dia<=30 && mes==9 || dia>=1 && dia<=22 && mes==10){

        printf("libra");

    }else if (dia>=23 && dia <=31 && mes==10 || dia>=1 && dia<=21 && mes==11){

        printf("escorpiao");

    }else if (dia>=22 && dia<=30 && mes==11 || dia>=1 && dia<=21 && mes==12){

        printf("sagitario");

    }else if (dia>=22 && dia<=31 && mes==12 || dia>=1 && dia<=20 && mes==1){

        printf("capricornio");

    }else if (dia>=21 && dia<=31 && mes==1 || dia>=1 && dia<=18 && mes==2){

        printf("aquario");

    }else if (dia>=19 && dia<=29 && mes==2 || dia>=1 && dia<=19 && mes==3){

    printf("peixes");

    }else{

        printf("dia ou mes invalido");
    }
    printf("\n");
    getch();
    system("PAUSE");
}
