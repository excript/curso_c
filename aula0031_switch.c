#include <stdio.h>
#include <stdlib.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int main()
{
    /*
    switch( expressão ){
    case(expressao-cost):
        break;
    case(true):

    default:
    //não há necessida de colocarmos um break;
    }
    */

    printf("Digite um valor entre 0 e 9");
    int i;
    scanf("%i", &i);

    switch(i){
    case 0:
        printf("A opção digitada foi 'zero' ");
        break;
    case 1:
        printf("A opção digitada foi 'um'");
        break;
    case 2:
        printf("A opção digitada foi 'dois'");
        break;
    case 3:
        printf("A opção digitada foi 'tres'");
        break;
    case 4:
        printf("A opção digitada foi 'quatro'");
        break;
    case 5:
        printf("A opção digitada foi 'cinco'");
        break;
    case 6:
        printf("A opção digitada foi 'seis'");
        break;
    case 7:
        printf("A opção digitada foi 'sete'");
        break;
    case 8:
        printf("A opção digitada foi 'oite'");
        break;
    case 9:
        printf("A opção digitada foi 'nove'");
        break;
    default:
        printf("Opção default.");
    }


    return 0;
}








