// Escriba un programa en C que utilice un vector para almacenar las N
// notas de un alumno. El programa debe permitir ingresar las notas,
// asegurando que sean valores entre 1 y 5, y que N sea un número
// natural. Luego, debe calcular e imprimir: El promedio de todas las notas
// ingresadas, la nota más alta registrada y la nota más baja registrada.
#include <stdio.h>
int main()
{
    // Ingresar
    int cantidad_notas, i, j, auxiliar;
    double suma_notas, promedio;
    char c;
    printf("Ingrese la cantidad de notas que desea calcular:");
    do
    {
        while (scanf("%d", &cantidad_notas) != 1)
        {
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            printf("No cumple la condicion, favor ingrese un valor correcto:");
        }
        if (cantidad_notas <= 0 )
        {
            printf("El numero debe estar entre 1 y 5, por favor vuleva a introducir:");
        }
        
    } while (cantidad_notas <= 0);

    int notas[cantidad_notas];
    for (i = 0; i < cantidad_notas; i++)
    {
        printf("Introduzca la nota numero %d:", i + 1);
        scanf("%d", &notas[i]);
        while (notas[i]<1 || notas[i] > 5)
        {
            printf("La nota debe ser entre 1 y 5, por favor vuelva a introducir la nota %d:", i +1);
            scanf("%d", &notas[i]);
        }
        
    }
    // Promedio
    suma_notas = 0;
    for (i = 0; i < cantidad_notas; i++)
    {
        suma_notas = suma_notas + notas[i];
    }
    promedio = suma_notas / cantidad_notas;
    printf("El promedio es: %.2lf\n", promedio);
    // Ordenar
    for (i = 0; i < cantidad_notas; i++)
    {
        for (j = 0; j < cantidad_notas - i; i++)
        {
            if (notas[j] > notas[j + 1])
            {
                auxiliar = notas[j + 1];
                notas[j] = notas[j + 1];
                notas[j] = auxiliar;
            }
        }
    }
    // Mas alto
    printf("La nota mas alta es: %d\n", notas[cantidad_notas - 1]);
    // Mas bajo
    printf("La nota mas baja es: %d\n", notas[0]);
    return 0;
}