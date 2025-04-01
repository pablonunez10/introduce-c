// Escribir un programa que, dado un número de 6 cifras ingresado por teclado, muestre
// enpantalla el número invertido.

#include <stdio.h>

int main()
{
    int numero;
    printf("Introduzca un numero de 6 cifras:");
    scanf("%d", &numero);
    int unidad = numero % 10;
    int decena = (numero % 100) / 10;
    int centena = (numero % 1000) / 100;
    int unidad_millar = (numero % 10000) / 1000;
    int decena_millar = (numero % 100000) / 10000;
    int centena_millar = (numero % 1000000) / 100000;

    printf("%d%d%d%d%d%d", unidad, decena, centena, unidad_millar, decena_millar, centena_millar);
    return 0;
}