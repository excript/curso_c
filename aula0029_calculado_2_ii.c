#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int main()
{
    float num1, num2, resultado;
    char op  = '0';

    do{
        num1, num2, resultado = 0;

        //imprimindo as opções da nossa calculadora
        printf("\n (1) somar\n");
        printf(" (2) subtrair\n");
        printf(" (3) multiplicar\n");
        printf(" (4) dividir\n");
        printf(" (0) sair do programa\n");

        printf("\nInforme a operacao:\n " );
        printf("\t\t\t\t>>> ");
        op = getche();

        if(op!='0'){

            printf("Digite o primeiro numero:   \t>>> ");
            scanf("%f", &num1);
            printf("Digite o segundo numero:   \t>>> ");
            scanf("%f", &num2);

            if(op=='1'){
                resultado = num1 + num2;
            }else{
                if(op == '2'){
                    resultado = num1 - num2;
                }else{
                    if(op == '3'){
                        resultado = num1 * num2;
                    }else{
                        if(op == '4'){
                            resultado = num1 / num2;
                        }
                    }

                }
            }

        }

        printf( "color 02" );
        printf( "\nO resultado eh: \t\t>>> %f\n", resultado );

        //system("pause");//parar o programa

        //1) pedimos para o usuário digitar uma tecla
        //2) utilizamos a função getch() para parar o programa
        //   até que o usuário digite uma tecla
        //3) quando o usuário digitar qualquer tecla
        //nós limpamos todo o console e o looping DO é executado
        //   novamente
        printf("\nPressione uma tecla para realizar um nova operacao: ");
        getch();//pausa o programa
        system("cls");//limpar a tela

    }while(op != '0');

    return 0;
}

