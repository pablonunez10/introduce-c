// Leer el precio de tres productos y calcule el costo total aplicando un
// descuento del 10%. Imprimir el costo total con descuento.

#include <stdio.h>

int main()
{
    int producto[3], i, suma_produ = 0;
    double descuento;
    for (i = 0; i < 3; i++)
    {
        printf("Ingrese el precio del %d producto: ", i + 1);
        scanf("%d", &producto[i]);
        suma_produ = suma_produ + producto[i];
    }
    printf("El monto total es: %d\n", suma_produ);
    printf("----Usted tiene un descuento del 10 porciento---\n");
    descuento = 0.9*suma_produ;
    printf("El precio final a pagar es: %.2lf", descuento);
    return 0;
}