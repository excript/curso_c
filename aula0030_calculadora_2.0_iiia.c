<pre class="code" lang="c">

</pre>

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
        num1 = num2 = resultado = 0;

        printf("\n (1) somar\n");
        printf(" (2) subtrair\n");
        printf(" (3) multiplicar\n");
        printf(" (4) dividir\n");
        printf(" (0) sair do programa\n");

        printf("\nInforme a operacao:\n " );
        printf("\t\t\t\t>>> ");

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

        printf( "\nO resultado eh: \t\t>>> %f\n", resultado );

        printf("\nPressione uma tecla para realizar um nova operacao: ");
        getch();
        system("cls");

    }while(op != '0');

    return 0;
}

