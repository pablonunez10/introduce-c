// Genere un programa que pueda imprimir en pantalla un cuadrado,
// un diamante, un óvalo y una flecha (en la dirección que quieran).

#include <stdio.h>
//Cuadrado
int cuadrado() {
    int i,j;
    int n = 4;
    printf("El cudrado es: \n");

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("* ");
        };
        printf("\n");
        
    };
    
    return 0;
};

int flecha(){
    int k;
    int m=5;

    for ( k = 0; k < m; k++)
    {
        printf("* ");
    }
    
    return 0;
}