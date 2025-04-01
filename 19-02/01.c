#include <stdio.h>

int main(){
    double a, b;
    printf("Ingrese el primer numero: ");
    scanf("%lf", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%lf", &b);
    double suma,resta,multiplicacion, division;
    suma = a +b;
    resta = a - b;
    multiplicacion = a * b;
    division = a / b;
    printf("La suma es : %.2lf", suma);
    printf("La resta es : %.2lf", resta);
    printf("La multiplicacion es : %.2lf", multiplicacion);
    printf("La division es : %.2lf", division);
    return 0;
}