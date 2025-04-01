// • Quiere ver como se forma un triángulo de caracteres de la a la z, en donde él coloque una
// letra del abecedario y luego genere un triángulo, comenzando la punta con una a, luego
// abajo dos bb, luego tres ccc y así sucesivamente, y por último, que imprima la cantidad de
// caracteres que contiene el triángulo.
// • Necesita ver cuáles son los N primeros números primos y cuántos hay en ese rango de
// valores.
// • Quiere saber a la edad actual de una persona en base a su fecha de nacimiento.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int opcion, i, j, total_caracteres, min, max, cantida_num_primo, numero[50], esPrimo, count, num,dia,ano,mes, anio_actual,mes_actual,dia_actual,edad;
    char c, letra;
    srand(time(NULL));
    count = 0;
    num = min;
    do
    {
        printf("\nBienvenido al programa\n");
        printf("Opcion 1 Triangulo de caracteres\n");
        printf("Opcion 2 Numeros primos\n");
        printf("Opcion 3 Edad Actual\n");
        printf("Opcion 4 Finalizar el programa\n");
        do
        {
            printf("Ingrese una opcion:");
            while ((scanf("%d", &opcion)) != 1)
            {
                while ((c = getchar()) != '\n' && c != EOF)
                    ;
                ;
                printf("El valor ingresado no es el correcto, por favor vuelva a introducir un entero positivo(1-4): ");
            }
            if (opcion <= 0 || opcion > 4)
            {
                printf("Ingrese un entero positivo entre (1-4)\n");
            }
        } while (opcion <= 0 || opcion > 4);
        switch (opcion)
        {
        case 1:
            printf("Ingresaste a la opcion 1, triangulo de caracteres\n");
            printf("Introduzca hasta que caracter desea hacer el calculo:");
            scanf(" %c", &letra);
            // Validar letra
            printf("El caracter ingresado es: %c\n", letra);
            total_caracteres = 0;
            for (i = 1; i <= (letra - 'a' + 1); i++)
            {
                for (j = 0; j < i; j++)
                {
                    printf("%c", 'a' + (i - 1));
                    total_caracteres++;
                }
                printf("\n");
            }
            printf("La cantidad de caracteres encontrados es: %d", total_caracteres);
            break;
        case 2:
            printf("Ingresaste a la opcion 2, cantidad de numeros primos en un rango\n");
            do
            {
                printf("Introduzca el valor minmo para los numeros a generar");
                while ((scanf(" %d", &min)) != 1)
                {
                    while ((c = getchar()) != '\n' && c != EOF)
                        ;
                    ;
                    printf("El valor minimo ingresado no es el correcto, por favor introduzca un numero positivo:");
                }
                if (min < 0)
                {
                    printf("Introduzca un entero positivo: \n");
                }

            } while (min < 0);

            do
            {
                printf("Introduzca el valor maximo para los numeros a generar");
                while ((scanf(" %d", &max)) != 1)
                {
                    while ((c = getchar()) != '\n' && c != EOF)
                        ;
                    ;
                    printf("El valor maximo ingresado no es el correcto, por favor introduzca un numero positivo");
                }
                if (max < 0)
                {
                    printf("Introduzca un entero positivo");
                }

            } while (max < 0);
            do
            {
                printf("Introduzca el valor de la cantidad de numeros primos que desea hallar en el rango:");

                while ((scanf(" %d", &cantida_num_primo)) != 1)
                {
                    while ((c = getchar()) != '\n' && c != EOF)
                        ;
                    ;
                    printf("El valor de la cantiad de numeros primos ingresado no es el correcto, por favor introduzca un numero positivo");
                }
                if (cantida_num_primo < 0)
                {
                    printf("Introduzca un entero positivo");
                }

            } while (cantida_num_primo < 0);
            printf("El valor minmo es: %d y el valor maximo es: %d y la canitdad de valores es: %d\n", min, max, cantida_num_primo);
            count = 0;
            num = min;

            while (count < cantida_num_primo)
            {
                esPrimo = 1; // Suponemos que es primo

                if (num < 2)
                {
                    esPrimo = 0; // Números menores a 2 no son primos
                }
                else if (num == 2)
                {
                    esPrimo = 1; // El número 2 es primo
                }
                else if (num % 2 == 0)
                {
                    esPrimo = 0; // Números pares mayores a 2 no son primos
                }
                else
                {
                    for (i = 3; i * i <= num; i += 2)
                    {
                        if (num % i == 0)
                        {
                            esPrimo = 0;
                            break;
                        }
                    }
                }

                if (esPrimo)
                {
                    numero[count] = num;
                    count++;
                }

                num++;
            }

            for (i = 0; i < cantida_num_primo; i++)
            {
                printf("%d\n", numero[i]);
            }

            break;

        case 3:
            printf("Ingresaste a la opcion 3, calculo de la edad actual\n");
            printf("Ingrese el dia de su cumple:");
            scanf("%d", &dia);
            printf("Ingrese el mes de su cumple:");
            scanf("%d", &mes);
            printf("Ingrese el ano de su cumple:");
            scanf("%d", &ano);
            time_t t = time(NULL);
            struct tm * fecha_actual = localtime(&t);
            anio_actual = fecha_actual -> tm_year + 1900;
            mes_actual = fecha_actual -> tm_mday +1;
            dia_actual =  fecha_actual -> tm_mday;
            edad = anio_actual - ano;
            printf("Tu edad es: %d", edad);
            // validar edad
            break;

        default:
            break;
        }
    } while (opcion != 4);
    printf("Finalizo el programa con exito");
    return 0;
}