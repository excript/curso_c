#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//	==========                 ==========
//	========== www.eXcript.com ==========
//	==========                 ==========

int main()
{
    //&&
    //(true)&&(true)

    int i = 40;
    int condicao = (i>20)&&(i<100);

    printf("%i", condicao );
    printf("%i", !condicao );

    //||
    //(true)||(false)   -> 1 ok
    //(false)||(true)   -> 1 ok
    //(true)||(true)    -> 1 ok
    //(false)||(false)  -> 0

    system("cls");

    int x = 10;
    int cond = 0;

    cond = (x==10)||(x<1);
    printf( "%i", cond );

    cond = (x==0)||(x!=1000);
    printf( "%i", cond );

    cond = (x==10)||(x!=0);
    printf( "%i", cond );

    cond = (x!=10)||(x==0);
    printf( "%i", cond );

    return 0;
}







