#include <stdio.h>
#include <stdlib.h>                                                                 /*

	==========                 ==========
	========== www.eXcript.com ==========
	==========                 ==========                                                       */

int main()
{
    const p = 5;


    int i = 10 + (10 - 50);
    /*
        == Associação da esquerda para a direita ==
        1) ()
        2) *, /, %
        3) +, -
        4) <, <=, >, >=
        5) ==, !=

        == Associação da direita para esquerda ==
        1) --, ++
        2) =, +=, -+, *=, /=, %=



    */

    int a, b, c;

    a = (b = (c = 1));
    printf("%i\n", a);
    printf("%i\n", b);
    printf("%i\n", c);

    return 0;
}
