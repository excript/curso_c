#include <stdio.h>
#include <stdlib.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int main()
{
    printf("Digite um valor entre 0 e 9\n>>>");
    int i;
    scanf("%i", &i);

    switch(i){
    case 0:
        printf("\n'zero'\n");
        break;

    case 1:printf("\nVocê ");
    case 2:printf(" digitou ");
    case 3:
        break;
        printf("um num. ");
    case 4:printf(" entre ");
    case 5:printf(" 1 e 5\n");

        //break;

    case 6:
        printf("\nA opção digitada foi 'seis'\n");
        //break;
    case 7:printf("\nA opção digitada foi 'sete'\n");
        break;
    case 8:
        printf("\nA opção digitada foi 'oite'\n");
        break;
    case 9:
        printf("\nA opção digitada foi 'nove'\n");
        break;

    case 45:
        printf("\O valor digitado foi 45'\n");
        break;
    case 45000:
        printf("\O valor digitado foi 45000'\n");
        break;
    default:
        //A nossa instrução default sera executa caso
        //1) caso nenhum item seja satisfatório
        //2) não haja a instrução break
        printf("\nOpção default.\n");
    }


    return 0;
}








