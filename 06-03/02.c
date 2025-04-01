// El MCD a través del método de Euclides: Realice un programa en donde
// permita la entrada por teclado de dos números enteros y positivos, y que calcule
// el máximo común divisor de dichos números mediante el método de Euclides.
// Validar que los datos ingresados sean números, y que sean enteros y positivos.

#include <stdio.h>

int main(){
    int numero1,numero2;
    char c;
    printf("Ingrese el primer numero:");
    do
    {
        while (scanf("%d", &numero1) != 1){
            while (c = getchar() != '\n' && c != EOF)
            {
                printf("El dato introducido no es el correcto, por favor vuelve a introducir:");
            }
            
        }
        printf("Ingrese el segundo numero:");
        while (scanf("%d", &numero2) != 1){
            while (c = getchar() != '\n' && c != EOF)
            {
                printf("El dato introducido no es el correcto, por favor vuelve a introducir:");
            }
            
        }    } while (numero1 <= 0 || numero2 <=0);
    
    return 0;
}