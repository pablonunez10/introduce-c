// El siguiente programa copia un mensaje en un array de caracteres y lo imprime en la pantalla. Ya que
// printf y strcpy (una función de cadena) se utilizan, se necesitan sus archivos de cabecera
// especificos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase[50], frase2[50];
    int longitud;
    printf("Introduzca la frase numero 1:");
    fgets(frase, sizeof(frase), stdin);
    printf("Introduzca la frase numero 2:");
    fgets(frase2, sizeof(frase2), stdin);
    // Lo que hace strcpy copia lo del segundo parametrro en el primer parametro
    strcpy(frase, frase2);
    printf("%s", frase2);
    printf("%s", frase);
    // Lo que hace strcat es concatena ambas cadenas
    strcat(frase, frase2);
    printf("%s", frase);
    // Lo que hace es que verifica si ambas cadenas son iguales
    if(strcmp(frase,frase2)==0){
        printf("Son iguales");
    } else {
        printf("No son iguales");
    }
    // Lo que hace es alla la cadena pero hay que quitarle posiciones
    longitud = strlen(frase2);
    printf("%d",longitud);
}