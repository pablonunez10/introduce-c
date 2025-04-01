//convertir a pies a pulga
#include <stdio.h>

int main(){
    int pies, pulgadas, conversion;
    printf("Introduzca la cantidad de pies:");
    scanf("%d", &pies);
    pulgadas = 12;
    conversion = pies * pulgadas;
    printf("El número que introduciste equivale a: %d pulgadas\n", conversion);
    return 0;
}