//Leer el precio de tres productos y calcule el costo total aplicando un
// descuento del 10%. Imprimir el costo total con descuento.

//Leer precio de los tres productos

//Hacer el descuento del 10%

//Imprimer el costo total con descuento

#include <stdio.h>

int main() {
    int precio1,precio2,precio3;
    float descuento, descuento_aplicado1,descuento_aplicado2, descuento_aplicado3;
    printf("Introduzca el primer precio:");
    scanf("%d", &precio1);
    printf("Introduzca el segundo precio:");
    scanf("%d", &precio2);
    printf("Introduzca el tercer precio:");
    scanf("%d", &precio3);
    descuento = 0.1;
    descuento_aplicado1 = precio1 * descuento;
    descuento_aplicado2 = precio2 * descuento;
    descuento_aplicado3 = precio3 * descuento;
    printf("El descuento del primer precio es: %.2f  \n El descuento aplicado del segundo precio es: %.2f \n El descuento aplicado al tercer precio es: %.2f \n", descuento_aplicado1, descuento_aplicado2, descuento_aplicado3);
    printf("El precio final del primer precio es: %.2f \n El precio final del segundo precio es: %.2f \n El precio final del tercer precio es: %.2f", precio1-descuento_aplicado1, precio2-descuento_aplicado2,precio3-descuento_aplicado3);
    return 0;
}