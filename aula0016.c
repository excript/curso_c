#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int main()
{
    char c;
    printf("Digite um caracter em letra min�scula: ");
    scanf( "%c", &c );

    if(c >= 'a')
    {
        printf("\nSegue a letra que voc� digitou em mai�scula: > %c < \n",
                    toupper( c ) );
    }

    return 0;
}
