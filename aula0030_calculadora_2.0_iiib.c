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

        //imprimindo as op��es da nossa calculadora
        printf("\n (1) somar\n");
        printf(" (2) subtrair\n");
        printf(" (3) multiplicar\n");
        printf(" (4) dividir\n");
        printf(" (0) sair do programa\n");

        //pede para o usu�rio digitar a op��o desejada
        //0 - sair; 1 - soma; 2 - subtrair
        //3 - multiplicar; 4 dividir
        printf("\nInforme a operacao:\n " );
        printf("\t\t\t\t>>> ");
        //a fun��o getche recebe o caractere e j� da enter
        //ou seja, n�o � poss�vel ao usu�rio
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
                if(op == '2'){//SUBRA��O
                    resultado = num1 - num2;
                }else{
                    if(op == '3'){//MULTIPLICA��O
                        resultado = num1 * num2;
                    }else{
                        if(op == '4'){//DIVIS�O
                            resultado = num1 / num2;
                        }
                    }

                }
            }

        }

        //imprime o resultado para o nosso usu�rio
        printf( "\nO resultado eh: \t\t>>> %f\n", resultado );

        //system("pause");//parar o programa

        //1) pedimos para o usu�rio digitar uma tecla
        //2) utilizamos a fun��o getch() para parar o programa
        //   at� que o usu�rio digite uma tecla
        //3) quando o usu�rio digitar qualquer tecla
        //n�s limpamos todo o console e o looping DO � executado
        //   novamente
        printf("\nPressione uma tecla para realizar um nova operacao: ");
        //Observe que a fun��o getch() � != da
        //fun��o getche() que n�s utilizamos acima
        //O que as difere?
        //A func. getch() recebe uma caractere digitado
        //mas esse caractere n�o � impresso na tela
        //j� a fun��o getche(), recebe o char e ainda
        //imprime-o na tela
        getch();//pausa o programa

        //chamamos a fun��o system e passamos um par�metro
        //estamos dizendo para limpar a tela e assim
        //dar a sensa��o para o nosso usu�rio de que
        //ele sempre est� utilizando a mesma tela
        system("cls");//limpar a tela

    }while(op != '0');

    return 0;
}

