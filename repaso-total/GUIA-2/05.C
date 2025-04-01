// Escribir un programa que permita ingresar por teclado un número de 5 cifras y que
// muestre en pantalla el dígito de las centenas.
#include <stdio.h>

int main()
{
    int numero;
    printf("Ingrese un numero de 5 cifras: ");
    scanf("%d", &numero);
    printf("El dígito de las centenas es: %d", numero % 1000);
    return 0;
}