#include <stdio.h>
#include <stdlib.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int main()
{
    int x  = 0;

    while(x < 11){
        printf("msg\n");
        x += 1;
    }

    /*

        1) += -> soma
        2) -= -> subtração
        3) *= -> multiplicação
        4) /= -> divisão
        5) %= -> resto da divisão

    */

    int i = 50;
    printf("soma: %i\n", i+=100);
    printf("subracao: %i\n", i-=50);
    printf("multiplicacao: %i\n", i*=3);
    printf("divisão: %i\n", i/=3);
    printf("resto: %i\n", i%=3);


    return 0;
}








