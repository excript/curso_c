#include <stdio.h>
#include <stdlib.h>
                                                                                                /*
	==========                 ==========
	========== www.eXcript.com ==========
	==========                 ==========                                                       */

int main()
{
    double num = 10;
    char c = 's';

    {
        printf("Bloco 1\n");

        double dinheiro = 3.55;
        printf("O valor eh: %f\n", dinheiro);
    }

    printf("Informe um numero: \n");
    scanf("%lf", &num);

    if(num==50)E:\Claudio\VideoAula\C\0042
        printf("Bloco IF\n");
    else{
        printf("Bloco ELSE\n");
        printf("----\n");
    }

    return 0;
}
