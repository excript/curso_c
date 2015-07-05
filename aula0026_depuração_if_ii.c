<pre class="code" lang="c">

</pre>

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int main()
{
    printf("Digite o numero 1:\n");

    char c;
    c = getchar();

    if(c == '1')
    {
        printf("\nO caracter digitado esta correto.\n");
    }else{
        printf("\nO valor digitado e invalido.\n");
        printf("Voce digitou o caracter >%c<.\n", c);
    }

    return 0;
}
