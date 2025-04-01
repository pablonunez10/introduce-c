// Lea una cadena y verifique si la misma es o no un palíndromo.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char palabra[50], resultado[50], palabraInvertida[50];
    int i, longitud, j = 0;
    printf("Introduzca una frase:");
    fgets(palabra, sizeof(palabra), stdin);
    printf("La palabra es: %s", palabra);
    // va eliminar los saltos de lineas
    palabra[strcspn(palabra, "\n")] = '\0';
    // convertir en minusculas y eliminar los espacios
    for (i = 0; palabra[i] != '\0'; i++)
    {
        if (palabra[i] != ' ')
        {
            resultado[j++] = tolower(palabra[i]);
        }
    }
    resultado[j] = '\0';
    // longitud
    printf("La pabra sin espacio y sin mayusculas es: %s\n", resultado);
    resultado[strcspn(resultado, "\n")] = '\0';
    longitud = strlen(resultado);
    // Inverit la frase
    for (i = 0; i < longitud; i++)
    {
        palabraInvertida[i] = resultado[longitud - 1 - i];
    }
    palabraInvertida[longitud] = '\0';
    printf("Frase invertida: %s\n", palabraInvertida);
    if (strcmp(resultado, palabraInvertida) == 0)
    {
        printf("Es palindromo.\n");
    }
    else
    {
        printf("No es palindromo.");
    }
    return 0;
}