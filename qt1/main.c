#include <stdio.h>

// limites da lista
#define listaINICIO 1
#define listaFIM 100
#define razao 2

main()
{
    int primeiroPar;

    int num = listaINICIO;
    int ENCONTROU = 0;
    while ((num <= listaFIM) && (num != ENCONTROU) && (listaFIM != ENCONTROU))
    {
        if (num % 2 == 0)
        {
            primeiroPar = num;
            ENCONTROU = 1;
        }
        num++;
    }

    if (ENCONTROU)
    {
        printf("Numero pares entre %d e %d:\n %2d", listaINICIO, listaFIM, primeiroPar);

        for (int i = primeiroPar + razao; i <= listaFIM; i += razao)
        {
            printf(", %d", i);
        }
    }
    else
        printf("Não existem pares entre %d e %d", listaINICIO, listaFIM);
}