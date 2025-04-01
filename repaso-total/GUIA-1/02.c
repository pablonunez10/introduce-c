// Escribir un programa que lea tres enteros por teclado, y luego
// imprima la suma, el promedio y el producto entre los mismos.

#include <stdio.h>

int main()
{
    int n = 3, i, numero[3], suma = 0, producto = 1;
    for (i = 0; i < n; i++)
    {
        printf("Introduzca el %d numero: ", i + 1);
        scanf("%d", &numero[i]);
        suma = suma + numero[i];
        producto = producto * numero[i];
    }
    printf("La suma es: %d\n", suma);
    printf("El producto es: %d", producto);

    return 0;
}