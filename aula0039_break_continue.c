#include <stdio.h>
#include <stdlib.h>

int main()
{
    //break     -> simpleste interrompe o nosso ciclo
    //continue  -> interrompe o nosso laço

    for(int x = 0; x<=10; ++x){

        //qndo x == 20, interrompa somente o laço atual
        if(x == 2){
            printf("-\n", x);
            continue;
        }

        //qndo nós chegamos a 80 o looping será finalizado
        if(x == 8){
            printf("-\n", x);
            break;
        }

        printf("%i\n", x);

    }


    return 0;
}
