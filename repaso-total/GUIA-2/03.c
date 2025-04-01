// Escribir un programa que permita la introducción por teclado (mediante getchar) de
// dos valores enteros de una cifra y que calcule e imprima por pantalla el producto de ellos.

#include <stdio.h>

int main()
{
    char cifra1, cifra2;
    printf("Introduza la primera cifra en su teclado:");
    cifra1 = getchar();
    getchar();
    printf("Introduza la segunda cifra en su teclado:");
    cifra2 = getchar();
    getchar();
    int num1 = cifra1 - '0';
    int num2 = cifra2 - '0';
    
    int producto = num1 * num2;
    printf("El producto de los caracteres son: %d", producto);
    return 0;
}