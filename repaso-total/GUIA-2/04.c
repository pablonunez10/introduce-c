// Escribir un programa que lea por teclado una letra minúscula y que la muestre en
// mayúsculas en pantalla.

#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    printf("Introduzca una letra:");
    scanf("%c", &c);
    char nuevo = toupper(c);
    printf("%c", nuevo);

    return 0;
}