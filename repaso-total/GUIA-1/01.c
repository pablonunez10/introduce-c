// Realice un programa que pida dos números por teclado y devuelva
// la suma, la resta, la multiplicación y la división de los mismos.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, suma, resta, multi, divi;
    char c;
    do
    {
        printf("Ingrese el primer numero:");
        while (scanf("%d", &num1) != 1)
        {
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            printf("Lo ingresado no es valido por favor vuelva a ingresar:");
        }
        if (num1 < 0)
        {
            printf("El numero ingresado debe ser mayor a 0: \n");
        }

    } while (num1 < 0);
    do
    {
        printf("Ingrese el segundo numero:");
        while (scanf("%d", &num2) != 1)
        {
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            printf("Lo ingresado no es valido por favor vuelva a ingresar:");
            if (num2 < 0)
            {
                printf("El numero ingresado debe ser mayor a 0: \n");
            }
        }
    } while (num2 < 0);

    printf("El primer numero es: %d", num1);
    printf("El primer numero es: %d", num2);
    suma = num1 + num2;
    resta = num1 - num2;
    multi = num1 * num2;
    divi = num1 / num2;
    printf("la resta es: %d", resta);
    printf("la suma es: %d", suma);
    printf("la multipliacion es: %d", multi);
    printf("la division es: %d", divi);
}