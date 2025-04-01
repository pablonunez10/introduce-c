// Implementar un programa en C que calcule y muestre en pantalla la suma y el promedio
// de 5 valores introducidos por teclado.

#include <stdio.h>
int main()
{
    int numeros[5], i, suma = 0;
    double promedio;
    for (i = 0; i < 5; i++)
    {
        printf("Introduzca el %d numero:", i + 1);
        scanf("%d", &numeros[i]);
        suma = suma + numeros[i];
        promedio = suma / 5;
    }

    printf("La suma es: %d\n", suma);
    printf("La promedio es: %.2lf", promedio);

    return 0;
}