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

        parte1 -> inicialização
        parte2 -> condição
        parte3 -> atualização
    }
    */

    for(int a=0, b=10; a<=10&&b>=0; ++a, --b){
        printf("%i", a);
        printf(" - ");
        printf("%i\n", b);
    }


    return 0;
}







