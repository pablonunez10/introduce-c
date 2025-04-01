#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char letra, i, min, max, caracter_random;

    // Generar un caracter random
    srand(time(NULL));
    min = 'A';
    max = 'z';
    caracter_random = min + (rand() % (max - min + 1));
    printf("%c\n", caracter_random);
    // Verificar si es minuscula o mayuscula
    if (isupper(caracter_random))
    {
        printf("Es mayuscula");
    }
    else if (islower(caracter_random))
    {
        printf("Es minuscula");
    }
    
    printf("Ingresar un caracter:");
    scanf(" %c", &letra);
    // Generar varios caracteres random
    for (i = 'a'; i <= letra; i++)
    {
        printf("%c\n", i);
    }
    // Imprimir caracteres la cantidad de veces del caracter
    for (i = 0; i < (letra - 'a' + 1); i++)
    {
        printf("%c", letra);
    }

    return 0;
}