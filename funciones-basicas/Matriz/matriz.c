#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    // Generar una matriz
    int fila, columna, i, j, min, max;
    printf("Introduzca la cantidad de filas que quiere que tenga la matriz:");
    scanf("%d", &fila);
    printf("Introduzca la cantidad de columnas que quiere que tenga la matriz:");
    scanf("%d", &columna);
    int matriz[fila][columna];
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            printf("Introduza los elementos de la fila %d de la columna %d:", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }
    // Generar una matriz pero con numeros aleatorios
    int matriz_aleatorios[fila][columna];

    printf("Introdruzca el valor minimo de la matriz:");
    scanf("%d", &min);
    printf("Introdruzca el valor max de la matriz:");
    scanf("%d", &max);

    srand(time(NULL));
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            matriz_aleatorios[i][j] = min + rand() % (max - min + 1);
        }
    }
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            printf("%d \t", matriz_aleatorios[i][j]);
        }
        printf("\n");
    }
    // diagonal principal
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }
    // diagonal secundaria
    for (i = 0 - 1; i < fila; i++)
    {
        for (j = 0 - 1; j < columna; j++)
        {
            if (i + j == fila - 1 || i + j + fila -1 == 5)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }
}