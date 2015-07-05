#include <stdio.h>
#include <stdlib.h>                                                                 /*

	==========                 ==========
	========== www.eXcript.com ==========
	==========                 ==========                                                       */

int main()
{
    int a,b,c;
    a=15;
    b=10;
    c=5;

    float x = 0;

    x = a * b / c;
    printf("Expressao: a * b / c = %f\n", x);

    x = a / b * c;
    printf("Expressao: a / b * c = %f\n", x);

    x = a + b * c;
    printf("Expressao: a + b * c = %f\n", x);

    x = a * b + c;
    printf("Expressao: a * b + c = %f\n", x);

    x = (a * b) + c;
    printf("Expressao: (a * b) + c = %f\n", x);

    x = a * (b + c);
    printf("Expressao: a * (b + c) = %f\n", x);


    return 0;
}






