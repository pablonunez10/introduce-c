#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// Quitar el espacio a una frase y poner en minusculas
int main()
{
    char frase[50], resultado[50];
    int i, j;
    j = 0;
    printf("Ingrese una frase:");
    fgets(frase, sizeof(frase), stdin);
    printf("La frase ingresada es: %s", frase);
    frase[strcspn(frase, "\n")] = '\0';
    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] != ' ')
        {
            resultado[j++] = tolower(frase[i]);
        }
    }
    resultado[j] = '\0';
    printf("El resultado es: %s" ,resultado);
}