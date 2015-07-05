#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int main()
{
    double num1, num2, resultado;
    char op  = '0';

    do{
        num1, num2, resultado = 0;

        //imprimindo as opções da nossa calculadora
        printf(" (1) somar\n");
        printf(" (2) subtrair\n");
        printf(" (3) multiplicar\n");
        printf(" (4) dividir\n");

        printf("Informe a operacao: \n" );
        op = getchar();

        printf("Digite o primeiro numero:\n\t ");
        scanf("%f", &num1);
        printf("Digite o segundo numero:\n\t ");
        scanf("%f", &num2);

    }while(op != '0');

    return 0;
}

