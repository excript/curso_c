<pre class="code" lang="c">

</pre>

#include <stdio.h>
#include <stdlib.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int main()
{
    /*
    for( ; parte2; parte3){

        parte1 -> inicializa��o
        parte2 -> condi��o
        parte3 -> atualiza��o
    }
    */

    for(int a=0, b=10; a<=10&&b>=0; ++a, --b){
        printf("%i", a);
        printf(" - ");
        printf("%i\n", b);
    }


    return 0;
}







