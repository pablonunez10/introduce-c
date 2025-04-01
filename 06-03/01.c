// La conjetura de ULAM: Empiece con cualquier número entero positivo. Si es
// par divídalo entre 2 y si es impar multiplique por 3 y aumente en 1. Calcular e
// imprimir los números enteros positivos repitiendo el proceso hasta llegar a 1.
// Por ejemplo, si empezamos en 5 la serie sería: 5, 16, 8, 4, 2, 1. Deben validar
// que el valor ingresado sea positivo, imprimir la secuencia generada y por último
// imprimir la cantidad de números que han sido generados en esa serie
// (incluyendo al número ingresado).

#include <stdio.h>

int main(){
    int numero, contador;
    char c;
    contador = 1;
    printf("Introduzca un número positivo mayor que 0: ");
    while (scanf("%d", &numero) != 1 || numero <= 0) {
        printf("Entrada no válida. Introduzca un número entero positivo: ");
        while (getchar() != '\n');
    }
    printf("El numero es: %d\n", numero);
    while (numero != 1){
        if (numero % 2 == 0)
        {
            numero = numero / 2;
        } else {
            numero = numero * 3 + 1;
        }
        printf(" -> %d\n", numero);
        contador = contador + 1; 
    }
    printf("El proceso se repitio: %d veces", contador);
    return 0;
}