<pre class="code" lang="c">

</pre>

#include <stdio.h>
#include <stdlib.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int main()
{
    int x               = 0;
    int valDigitado     = 0;

    printf("Informe a qnt de X que vc deseja repetir a instrução:\n");
    scanf( "%i", &valDigitado );

    while(x < valDigitado){
        printf("%i\n", x * 10);
        x = x + 1;
    }


    return 0;
}
