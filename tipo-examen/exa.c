// • Quiere ver como se forma un triángulo de caracteres de la a la z, en donde él coloque una
// letra del abecedario y luego genere un triángulo, comenzando la punta con una a, luego
// abajo dos bb, luego tres ccc y así sucesivamente, y por último, que imprima la cantidad de
// caracteres que contiene el triángulo.
// • Necesita ver cuáles son los N primeros números primos y cuántos hay en ese rango de
// valores.
// • Quiere saber a la edad actual de una persona en base a su fecha de nacimiento.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, n, min, val_maximo, numeros_generados, rango_valores, encontrados, es_primo, total_caracteres;
    min = 2;
    encontrados = 0;
    char letra;

    srand(time(NULL));

    do
    {
        printf("\nBienvenido al Menu \n");
        printf("1. Triangulo de caracteres\n");
        printf("2. Numeros primos en un rango\n");
        printf("3. Calcular edad desde fecha de nacimiento\n");
        printf("4. Salir del programa\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Ingresaste a la opcion de triangulo de caracteres\n");
            printf("Ingrese una letra del abecedario (a-z): ");
            scanf(" %c", &letra); // Espacio antes de %c para evitar problemas de buffer

            if (letra < 'a' || letra > 'z')
            {
                printf("Letra no valida. Debe ser de 'a' a 'z'.\n");
                break;
            }

            total_caracteres = 0;
            for (i = 1; i <= (letra - 'a' + 1); i++) // Cantidad de filas del triángulo
            {
                for (j = 0; j < i; j++) // Imprime 'i' veces la letra correspondiente
                {
                    printf("%c", 'a' + (i - 1));
                    total_caracteres++;
                }
                printf("\n");
            }

            printf("Cantidad total de caracteres en el triángulo: %d\n", total_caracteres);
            break;
        case 2:
            printf("Ingresaste a la opcion de numeros primos aleatorios\n");
            printf("Introduzca el valor maximo del rango: ");
            scanf("%d", &val_maximo);
            printf("Introduzca cuantos primos deseas generar: ");
            scanf("%d", &rango_valores);

            encontrados = 0;

            while (encontrados < rango_valores)
            {
                numeros_generados = min + rand() % (val_maximo - min + 1);
                es_primo = 1;

                if (numeros_generados < 2)
                {
                    es_primo = 0;
                }
                else
                {
                    for (i = 2; i * i <= numeros_generados; i++)
                    {
                        if (numeros_generados % i == 0)
                        {
                            es_primo = 0;
                            break;
                        }
                    }
                }

                if (es_primo)
                {
                    printf("%d ", numeros_generados);
                    encontrados++;
                }
            }
            printf("\n");
            break;

        case 3:
            printf("Ingresaste a la opcion de fecha de nacimiento\n");

            int anio_nacimiento, mes_nacimiento, dia_nacimiento;
            int edad;

            printf("Ingrese su año de nacimiento (YYYY): ");
            scanf("%d", &anio_nacimiento);
            printf("Ingrese su mes de nacimiento (1-12): ");
            scanf("%d", &mes_nacimiento);
            printf("Ingrese su dia de nacimiento (1-31): ");
            scanf("%d", &dia_nacimiento);

            // Obtener la fecha actual
            time_t t = time(NULL);
            struct tm *fecha_actual = localtime(&t);
            int anio_actual = fecha_actual->tm_year + 1900;
            int mes_actual = fecha_actual->tm_mon + 1;
            int dia_actual = fecha_actual->tm_mday;

            // Calcular la edad
            edad = anio_actual - anio_nacimiento;

            // Ajustar si aún no ha cumplido años este año
            if (mes_nacimiento > mes_actual || (mes_nacimiento == mes_actual && dia_nacimiento > dia_actual))
            {
                edad--;
            }

            printf("Tu edad actual es: %d años\n", edad);
            break;
        case 4:
            printf("Finalizaste el programa\n");
            break;

        default:
            printf("Opcion no valida. Intente de nuevo.\n");
        }

    } while (n != 4);

    return 0;
}
