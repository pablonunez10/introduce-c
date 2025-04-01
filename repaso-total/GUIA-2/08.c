// Leer un número entero obtenido al lanzar un dado de seis caras e imprimir el número en
// letras de la cara opuesta. En las caras opuestas de un dado de seis caras están los
// números: 1-6, 2-5 y 3-4. Si el número del dado capturado es menor que 1 o mayor que 6,
// se mostrará: “Un DADO no tiene ese número”.

#include <stdio.h>

int main()
{
    int numero;
    printf("Introduzca un numero:");
    scanf("%d", &numero);
    switch (numero)
    {
    case 1:
        printf("La cara opuesta es 6");
        break;
    case 2:
        printf("La cara opuesta es 5");
        break;

    case 3:
        printf("La cara opuesta es 4");
        break;

    case 4:
        printf("La cara opuesta es 3");
        break;

    case 5:
        printf("La cara opuesta es 2");
        break;

    case 6:
        printf("La cara opuesta es 1");
        break;
    }
    return 0;
}