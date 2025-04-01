#include <stdio.h>

int main(){
    int pulgadas;
    float conversion;
    printf("Intorduzca la cantidad de pulgadas que desea convertir a pies:");
    scanf("%d", &pulgadas);
    conversion = pulgadas / 12.0;
    printf("La cantidad introducida equivale a: %.2f pies", conversion);
    return 0;
}