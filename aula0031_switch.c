#include <stdio.h>
#include <stdlib.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int main()
{
    /*
    switch( express�o ){
    case(expressao-cost):
        break;
    case(true):

    default:
    //n�o h� necessida de colocarmos um break;
    }
    */

    printf("Digite um valor entre 0 e 9");
    int i;
    scanf("%i", &i);

    switch(i){
    case 0:
        printf("A op��o digitada foi 'zero' ");
        break;
    case 1:
        printf("A op��o digitada foi 'um'");
        break;
    case 2:
        printf("A op��o digitada foi 'dois'");
        break;
    case 3:
        printf("A op��o digitada foi 'tres'");
        break;
    case 4:
        printf("A op��o digitada foi 'quatro'");
        break;
    case 5:
        printf("A op��o digitada foi 'cinco'");
        break;
    case 6:
        printf("A op��o digitada foi 'seis'");
        break;
    case 7:
        printf("A op��o digitada foi 'sete'");
        break;
    case 8:
        printf("A op��o digitada foi 'oite'");
        break;
    case 9:
        printf("A op��o digitada foi 'nove'");
        break;
    default:
        printf("Op��o default.");
    }


    return 0;
}








