//Escribir un programa que lea tres enteros por teclado, y luego
// imprima la suma, el promedio y el producto entre los mismos.
#include <stdio.h>
int main(){
    int a,b,c, suma, producto;
    double promedio;
    //Pedir tres numeros enteros
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &c);
    //Suma
    suma = a + b + c;
    printf("La suma de los numeros es: %d\n", suma);
    //Producto
    producto = a * b * c;
    printf("El producto de los numeros es: %d\n", producto);
    //Promedio
    promedio = (a+b+c)/3;
    printf("El promedio de los numeros es: %.2lf", promedio);

    return 0;
}