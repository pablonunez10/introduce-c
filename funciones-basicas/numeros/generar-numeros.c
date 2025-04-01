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
            printf("No cumple la condicion, favor ingrese un valor correcto: ");
        }
        if (numero <= 0)
        {
            printf("No es un numero positivo, ingrese un positivo: ");
        }
    } while (numero <= 0);
    if (numero % 2 == 0)
    {
        printf("Es numero par");
    }
    else
    {
        printf("Es numero impar");
    }
}