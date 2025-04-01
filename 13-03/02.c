// Escribe un programa C que genere una sucesión de N números
// naturales, encuentre el valor máximo y lo imprima junto con el número
// de veces que aparece, y las posiciones en que esto ocurre. El proceso
// se repite con el resto de la sucesión hasta que no quede ningún
// elemento por tratar.
// Ejemplo de entrada:
// 7 10 143 10 52 143 72 10 143 7
// Salida generada:
// 143 aparece 3 veces, en posiciones 3 6 9
// 7 aparece 2 veces, en posicione s 1 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char c;
    int dimension;

    printf("Ingrese la dimension del vector:");
    // Validacion para que no ingrese caracter y tampoco ingrese numero negativo
    do
    {
        while (scanf("%d", &dimension) != 1)
        {
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            printf("Ingresa un valor valido, que sea numero mayor a 0:");
        }
        if (dimension <= 0)
        {
            printf("Introduce un valor positivo:");
        }

    } while (dimension <= 0);
    srand(time(NULL));
    int vector[dimension], i;
    // Ingresa los valores random
    for (i = 0; i < dimension; i++)
    {
        vector[i] = rand() % 6 + 1;
    }
    //Imprimo el vector
    for (i = 0; i < dimension; i++)
    {
        printf("La posicion %d es:%d \n",i, vector[i]);
    }
    // Primero debo encontrar el mayor de todos
    for (i = 0; i < dimension; i++)
    {
        
    }
    
    // Guardar posicion
    return 0;
}
