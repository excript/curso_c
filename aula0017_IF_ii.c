#include <stdio.h>
#include <stdlib.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int main()
{
    int i = 10;

    printf("Digite um número != de 5: \n") ;
    scanf( "%i", &i );

    if(i!=5)
    {
        printf("\nA expressão é:\n ");
        printf("TRUE\n");
    }else{
        printf("\nA expressão é:\n ");
        printf("FALSE\n");
    }


    //! é um sinal de negação, igual a expressão NOT


    /*
    1) positivo -> 1
    2) negativa -> 0
    */

    //== comparação positiva -> x == y
    //!= comparação negativa -> x != y
    //      !(x==y)

    return 0;
}
