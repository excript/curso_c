#include <stdio.h>
#include <stdlib.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int main()
{
    int i = 10;

    printf("Digite um n�mero != de 5: \n") ;
    scanf( "%i", &i );

    if(i!=5)
    {
        printf("\nA express�o �:\n ");
        printf("TRUE\n");
    }else{
        printf("\nA express�o �:\n ");
        printf("FALSE\n");
    }


    //! � um sinal de nega��o, igual a express�o NOT


    /*
    1) positivo -> 1
    2) negativa -> 0
    */

    //== compara��o positiva -> x == y
    //!= compara��o negativa -> x != y
    //      !(x==y)

    return 0;
}
