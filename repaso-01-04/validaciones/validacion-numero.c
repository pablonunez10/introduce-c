#include <stdio.h>

int main()
{
    int numero;
    char c;
    printf("Ingrese un numero:");
    do
    {
        while (scanf("%d", &numero) != 1)
        {
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            printf("Lo ingresado no es valido, por favor vuelva a introducir:");
            if (numero < 0)
            {
                printf("Debe ser un numero positivo\n");
            }
        }

    } while (numero < 0);

    return 0;
}