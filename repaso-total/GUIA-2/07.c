// Leer un año e imprimir si es bisiesto o no.

#include <stdio.h>

int main()
{
    int anio;
    printf("Introduzca el ano que desea calcular:");
    scanf("%d", &anio);
    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
    {
        printf("Es bisiesto");
    }
    else
    {
        printf("No es bisiesto");
    }
    return 0;
}