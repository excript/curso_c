#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int mainX()
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

        //pede para o usuário digitar a opção desejada
        //0 - sair; 1 - soma; 2 - subtrair
        //3 - multiplicar; 4 dividir
        printf("\nInforme a operacao:\n " );
        printf("\t\t\t\t>>> ");
        //a função getche recebe o caractere e já da enter
        //ou seja, não é possível ao usuário
        //digitar + de um caracter
        op = getche();
        printf("\n");

        if(op!='0'){

            printf("Digite o primeiro numero:   \t>>> ");
            scanf("%f", &num1);
            printf("Digite o segundo numero:   \t>>> ");
            scanf("%f", &num2);

            if(op=='1'){//SOMA
                resultado = num1 + num2;
            }else{
                if(op == '2'){//SUBRAÇÃO
                    resultado = num1 - num2;
                }else{
                    if(op == '3'){//MULTIPLICAÇÃO
                        resultado = num1 * num2;
                    }else{
                        if(op == '4'){//DIVISÃO
                            resultado = num1 / num2;
                        }
                    }

                }
            }

        }

        //imprime o resultado para o nosso usuário
        printf( "\nO resultado eh: \t\t>>> %f\n", resultado );

        //system("pause");//parar o programa

        //1) pedimos para o usuário digitar uma tecla
        //2) utilizamos a função getch() para parar o programa
        //   até que o usuário digite uma tecla
        //3) quando o usuário digitar qualquer tecla
        //nós limpamos todo o console e o looping DO é executado
        //   novamente
        printf("\nPressione uma tecla para realizar um nova operacao: ");
        //Observe que a função getch() é != da
        //função getche() que nós utilizamos acima
        //O que as difere?
        //A func. getch() recebe uma caractere digitado
        //mas esse caractere não é impresso na tela
        //já a função getche(), recebe o char e ainda
        //imprime-o na tela
        getch();//pausa o programa

        //chamamos a função system e passamos um parâmetro
        //estamos dizendo para limpar a tela e assim
        //dar a sensação para o nosso usuário de que
        //ele sempre está utilizando a mesma tela
        system("cls");//limpar a tela

    }while(op != '0');

    return 0;
}

