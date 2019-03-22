#include <stdio.h>
#include <stdlib.h>
ASDASD

int main()
{
    int numero;
    int max;
    int contador=0;

    do
    {
        printf("Ingresalo:");

        scanf("%d",&numero);

        if(contador==0)
        {
            max=numero;
        }
        else
        {
            if(numero > max)
            {
                max = numero;
            }

        }

        contador++;
    }while(numero != -1);

            printf("El numero max es: %d ", max);

    return 0;
}



